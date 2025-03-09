/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** display.c
*/

#include "inventory.h"

sfIntRect** create_sprite_rects(
    int sprite_w, int sprite_h, int sheet_w, int sheet_h)
{
    int rows = sheet_h / sprite_h;
    int columns = sheet_w / sprite_w;
    sfIntRect** sprite_rects = malloc(rows * sizeof(sfIntRect*));

    for (int i = 0; i < rows; i++) {
        sprite_rects[i] = malloc(columns * sizeof(sfIntRect));
    }
    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            sfIntRect rect = {
                column * sprite_w,
                row * sprite_h,
                sprite_w,
                sprite_h
            };
            sprite_rects[row][column] = rect;
        }
    }
    return sprite_rects;
}
