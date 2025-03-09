/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** display.c
*/

#include <SFML/Graphics.h>
#include "inventory.h"

void inv_draw_item(struct inventory_s *inventory, sfRenderWindow *window
    , view_t view, int i)
{
    for (int j = 0; j < 6; j += 1) {
        if (inventory->inventory[i][j] != 0) {
            int item_id = inventory->inventory[i][j] - 1;
            int row = item_id / 9;
            int column = item_id % 13;
            sfSprite_setTextureRect(inventory->items_sprite, inventory->
                sprite_rects[row][column]);
            sfSprite_setPosition(inventory->items_sprite, (sfVector2f)
                {view.pos_cam.x + 170 + j * 30, view.pos_cam.y + 42 + i * 30});
            sfRenderWindow_drawSprite(window, inventory->items_sprite, NULL);
        }
    }
}

int inventory_status(int inventory_open, sfClock *keyDelayClock
    , float elapsedSeconds, bool *keyAReleased)
{
    if (sfKeyboard_isKeyPressed(sfKeyA) && elapsedSeconds >= 0.1 && *
        keyAReleased) {
            inventory_open = !(inventory_open);
            sfClock_restart(keyDelayClock);
            *keyAReleased = false;
            return inventory_open;
    } if (!sfKeyboard_isKeyPressed(sfKeyA)) {
            *keyAReleased = true;
            return inventory_open;
    }
    return inventory_open;
}
