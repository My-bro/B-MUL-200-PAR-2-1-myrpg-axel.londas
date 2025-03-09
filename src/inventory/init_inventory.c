/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** init_inventory.c
*/

#include <stdlib.h>
#include "inventory.h"

sfIntRect** inventory_item(void)
{
    int sprite_w = 208 / 13;
    int sprite_h = 144 / 9;
    int sheet_w = 208;
    int sheet_h = 144;
    sfTexture *sprite_sheet_texture = sfTexture_createFromFile(
        "./src/sprite/inventory/item.png", NULL);
    sfIntRect** sprite_rects = create_sprite_rects(
        sprite_w, sprite_h, sheet_w, sheet_h);
    return sprite_rects;
}

void inv_init_armor(inventory_t *inventory, sfRenderWindow *window)
{
    inventory->armor = malloc(sizeof(int) * 3);
    for (int i = 0; i < 3; i++) {
        inventory->armor[i] = 0;
    }
}

void inv_init_inventory_item(inventory_t *inventory, sfRenderWindow *window)
{
    inventory->inventory_open = 0;
    inventory->keyAReleased = true;
    inventory->items_sprite = sfSprite_create();
    inventory->sprite_sheet_texture = sfTexture_createFromFile(
        "./src/sprite/inventory/item.png", NULL);
    sfSprite_setTexture(
        inventory->items_sprite, inventory->sprite_sheet_texture, sfTrue);
    inventory->sprite_rects = inventory_item();
    inventory->pos.y = 50;
    inventory->pos.x = 50;
}

void inv_init_case(inventory_t *inventory)
{
    inventory->inventory = malloc(sizeof(int *) * 5);
    for (int i = 0; i < 5; i += 1) {
        inventory->inventory[i] = malloc(sizeof(int) * 6);
        for (int j = 0; j < 6; j += 1)
            inventory->inventory[i][j] = 0;
    }
}

void init_inventory(inventory_t *inventory, sfRenderWindow *window)
{
    inv_init_case(inventory);
    inventory->dragging = false;
    inventory->keyDelayClock = sfClock_create();
    inventory->sprite = sfSprite_create();
    inventory->inventory_texture = sfTexture_createFromFile(
        "./src/sprite/inventory.png", NULL);
    inventory->inventory_back = sfRectangleShape_create();
    inventory->inv_back = sfColor_fromRGBA(0, 0, 0, 150);
    sfRectangleShape_setFillColor(
        inventory->inventory_back, inventory->inv_back);
    sfRectangleShape_setSize(inventory->inventory_back, (sfVector2f)
        {600, 500});
    sfSprite_setTexture(inventory->sprite,inventory->inventory_texture,sfTrue);
    sfSprite_setScale(inventory->sprite,(sfVector2f){0.5,0.5});
    inv_init_inventory_item(inventory, window);
    inv_init_armor(inventory, window);
}
