/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** mouse_event.c
*/

#include "inventory.h"

void mouseleft_pressed(inventory_t *inventory, sfRenderWindow *window
    , sfEvent *event, view_t view)
{
    int item_x = 0;
    int item_y = 0;
    if (inventory->inventory_open) {
        sfVector2i mouse_position = sfMouse_getPositionRenderWindow(window);
        sfVector2f world_mouse_position = sfRenderWindow_mapPixelToCoords(
            window, mouse_position, view.view1);
        item_x = (int)((world_mouse_position.x - view.pos_cam.x - 170) / 30);
        item_y = (int)((world_mouse_position.y - view.pos_cam.y - 42) / 30);
        if (item_x >= 0 && item_x < 6 && item_y >= 0 && item_y < 5) {
            inventory->dragging = true;
            inventory->dragging_item_x = item_x;
            inventory->dragging_item_y = item_y;
        }
    }
}

void mouseleft_released(inventory_t *inventory, sfRenderWindow *window
, sfEvent *event, view_t view)
{
    if (inventory->dragging) {
        sfVector2i mouse_position = sfMouse_getPositionRenderWindow(window);
        sfVector2f world_mouse_position = sfRenderWindow_mapPixelToCoords(
            window, mouse_position, view.view1);
        int release_x = (int)((world_mouse_position.x - view.
            pos_cam.x - 170) / 30);
        int release_y = (int)((world_mouse_position.y - view.pos_cam.
            y - 42) / 30);
        if (release_x >= 0 && release_x < 6 &
            & release_y >= 0 && release_y < 5) {
            int temp_item = inventory->inventory
                [inventory->dragging_item_y][inventory->dragging_item_x];
            inventory->inventory[inventory->dragging_item_y][inventory->
                dragging_item_x] = inventory->inventory[release_y][release_x];
            inventory->inventory[release_y][release_x] = temp_item;
        }
        inventory->dragging = false;
    }
}
