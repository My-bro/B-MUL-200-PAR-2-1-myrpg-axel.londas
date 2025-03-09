/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** armor.c
*/

#include "inventory.h"

void inv_switch_armor(inventory_t *inventory, int armor_x, int armor_y, int i)
{
    for (int j = 0; j < 6; j++) {
        if (inventory->inventory[i][j] == 0) {
            inventory->inventory[i][j] = inventory->armor[armor_y];
            inventory->armor[armor_y] = 0;
            return;
        }
    }
}

void inv_armor(inventory_t *inventory, sfRenderWindow *window
    , sfEvent *event, view_t view)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(window);
    sfVector2f world_mouse_position = sfRenderWindow_mapPixelToCoords(
        window, mouse_position, view.view1);
    int item_x = (int)((world_mouse_position.x - view.pos_cam.x - 170) / 30);
    int item_y = (int)((world_mouse_position.y - view.pos_cam.y - 42) / 30);

    if (item_x >= 0 && item_x < 6 && item_y >= 0 && item_y < 5) {
        inv_get_item_to_armor(inventory, item_x, item_y);
    }
    int armor_x = (int)((
        world_mouse_position.x - view.pos_cam.x - 205 - 5 * 30 - 30) / 30);
    int armor_y = (int)((world_mouse_position.y - view.pos_cam.y - 50) / 36);

    if (armor_x >= 0 && armor_x < 1 && armor_y >= 0 && armor_y < 3) {
        for (int i = 0; i < 5; i++)
            inv_switch_armor(inventory, armor_x, armor_y, i);
    }
}
