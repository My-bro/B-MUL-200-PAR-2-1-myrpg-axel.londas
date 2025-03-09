/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** interaction.c
*/

#include "inventory.h"

void handle_drag_and_drop(inventory_t *inventory, sfRenderWindow *window
    , sfEvent *event, view_t view)
{
    if (BUTTON == sfMouseLeft && event->type == sfEvtMouseButtonPressed) {
        mouseleft_pressed(inventory, window, event, view);
    } if (BUTTON == sfMouseLeft && event->type == sfEvtMouseButtonReleased) {
        mouseleft_released(inventory, window, event, view);
    } if (event->type == sfEvtMouseButtonReleased && BUTTON == sfMouseRight) {
        if (inventory->inventory_open)
            inv_armor(inventory, window, event, view);
    } if (event->type == sfEvtMouseButtonReleased && BUTTON == sfMouseMiddle) {
        inv_trash(inventory, window, event, view);
    }
}

void inv_get_item_to_armor(inventory_t *inventory, int item_x, int item_y)
{
    int temp;
    if (inventory->inventory[item_y][item_x] == 35 || inventory->
        inventory[item_y][item_x] == 36) {
        if (inventory->armor[0] == 0) {
            temp = inventory->armor[0];
            inventory->armor[0] = inventory->inventory[item_y][item_x];
            inventory->inventory[item_y][item_x] = temp;
            return;
        }
    }
}

void inv_drag_item(struct inventory_s *inventory, sfRenderWindow *window
    , view_t view)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(window);
    sfVector2f world_mouse_position = sfRenderWindow_mapPixelToCoords(
        window, mouse_position, view.view1);
    int dragged_item_id = inventory->inventory[inventory->dragging_item_y]
        [inventory->dragging_item_x] - 1;
    int row = dragged_item_id / 9;
    int col = dragged_item_id % 13;
    sfSprite_setTextureRect(inventory->items_sprite, inventory->sprite_rects
        [row][col]);
    sfSprite_setPosition(inventory->items_sprite, (sfVector2f)
        {world_mouse_position.x - 8, world_mouse_position.y - 8});
    sfRenderWindow_drawSprite(window, inventory->items_sprite, NULL);
}

void inv_trash(inventory_t *inventory, sfRenderWindow *window
    , sfEvent *event, view_t view)
{
    if (inventory->inventory_open) {
        sfVector2i mouse_position = sfMouse_getPositionRenderWindow(window);
        sfVector2f world_mouse_position = sfRenderWindow_mapPixelToCoords
            (window, mouse_position, view.view1);
        int it_x = (int)((world_mouse_position.x - view.pos_cam.x - 170) / 30);
        int it_y = (int)((world_mouse_position.y - view.pos_cam.y - 42) / 30);

        if (it_x >= 0 && it_x < 6 && it_y >= 0 && it_y < 5) {
            inventory->inventory[it_y][it_x] = 0;
        }
    }
}
