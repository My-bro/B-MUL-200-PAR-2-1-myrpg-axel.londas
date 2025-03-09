/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** inventory.c
*/

#include "inventory.h"

void inv_render_item(inventory_t *inventory, sfRenderWindow *window
    , view_t view)
{
    for (int i = 0; i < 5; i += 1) {
        inv_draw_item(inventory, window, view, i);
    }
    for (int i = 0; i < 3; i += 1) {
        if (inventory->armor[i] != 0) {
            int item_id = inventory->armor[i] - 1;
            int row = item_id / 9;
            int column = item_id % 13;
            sfSprite_setTextureRect(inventory->items_sprite, inventory->
                sprite_rects[row][column]);
            sfSprite_setPosition(inventory->items_sprite, (sfVector2f)
                {view.pos_cam.x + 205 + 5 * 30, view.pos_cam.y + 50 + i * 36});
            sfRenderWindow_drawSprite(window, inventory->items_sprite, NULL);
        }
    }
}

void inventory_is_open(struct inventory_s *inventory, sfRenderWindow *window
    , view_t view)
{
    if (inventory->inventory_open) {
        sfSprite_setPosition(inventory->sprite, (sfVector2f)
            {view.pos_cam.x + 20, view.pos_cam.y - 20});
        sfRectangleShape_setPosition(inventory->
            inventory_back, (sfVector2f){view.pos_cam.x, view.pos_cam.y});
        sfRenderWindow_drawRectangleShape(window, inventory->
            inventory_back, NULL);
        sfRenderWindow_drawSprite(window, inventory->sprite, NULL);
        inv_render_item(inventory, window, view);
        if (inventory->dragging)
            inv_drag_item(inventory, window, view);
    }
}

bool inv_transfert_item(inventory_t *inventory, int row, int item)
{
    for (int col = 0; col < 6; ++col) {
        if (inventory->inventory[row][col] == 0) {
            inventory->inventory[row][col] = item;
            return true;
        }
    }
}

bool add_item_to_inventory(inventory_t *inventory, int item)
{
    for (int row = 0; row < 5; ++row) {
        if (inv_transfert_item(inventory, row, item))
            return true;
    }
    return false;
}
