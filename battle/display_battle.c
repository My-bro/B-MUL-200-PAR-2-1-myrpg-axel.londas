/*
** EPITECH PROJECT, 2023
** display_battle
** File description:
** display_battle
*/

#include "battle.h"

void display_rect(battle_t *battle, sfRenderWindow *window)
{
    sfRenderWindow_drawRectangleShape(window, rect_1, NULL);
    sfRenderWindow_drawRectangleShape(window, rect_2, NULL);
    sfRenderWindow_drawRectangleShape(window, rect_3, NULL);
    sfRenderWindow_drawRectangleShape(window, rect_4, NULL);
    sfRenderWindow_drawRectangleShape(window, rect_hp, NULL);
    sfRenderWindow_drawRectangleShape(window, rect_hp_2, NULL);
}

void display_sprite(battle_t *battle, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, sprite_fighter_1, NULL);
    sfRenderWindow_drawSprite(window, sprite_fighter_2, NULL);
    sfRenderWindow_drawSprite(window, sprite_sword, NULL);
    sfRenderWindow_drawSprite(window, sprite_axe, NULL);
}

void display_text(battle_t *battle, sfRenderWindow *window)
{
    sfRenderWindow_drawText(window, text_hp_1, NULL);
    sfRenderWindow_drawText(window, text_hp_2, NULL);
    sfRenderWindow_drawText(window, text_actual_hp, NULL);
    sfRenderWindow_drawText(window, text_actual_hp_2, NULL);
    sfRenderWindow_drawText(window, text_full_hp, NULL);
    sfRenderWindow_drawText(window, text_full_hp_2, NULL);
}

void display_battle(battle_t *battle, sfRenderWindow *window)
{
    display_rect(battle, window);
    display_sprite(battle, window);
    display_text(battle, window);
}
