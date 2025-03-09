/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** arena_door
*/

#include "free.h"

void free_inventory(inventory_t *inventory)
{
    for (int i = 0; i < 5; i += 1) {
        free(inventory->inventory[i]);
    }
    free(inventory->inventory);
    free(inventory->armor);
    sfTexture_destroy(inventory->sprite_sheet_texture);
    free(inventory->sprite_rects);
    sfSprite_destroy(inventory->items_sprite);
    sfClock_destroy(inventory->keyDelayClock);
    free(inventory);
}
