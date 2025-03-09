/*
** EPITECH PROJECT, 2023
** my_rpg
** File description:
** inventory_struct.h
*/

#ifndef INVENTORY_STRUCT_H
    #define INVENTORY_STRUCT_H


typedef struct inventory_s {
    int dragging_item_x;
    int dragging_item_y;
    int inventory_open;
    int **inventory;
    int *armor;
    bool keyAReleased;
    bool dragging;
    sfRectangleShape *inventory_back;
    sfTexture *sprite_sheet_texture;
    sfTexture *inventory_texture;
    sfIntRect** sprite_rects;
    sfClock *keyDelayClock;
    sfSprite *items_sprite;
    sfColor inv_back;
    sfSprite *sprite;
    sfVector2f pos;
} inventory_t;

#endif //INVENTORY_STRUCT_H
