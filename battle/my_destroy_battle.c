/*
** EPITECH PROJECT, 2023
** my_destroy_battle
** File description:
** my_destroy_battle
*/

#include "battle.h"

void destroy_text_while(battle_t *battle)
{
    sfText_destroy(text_actual_hp);
    sfText_destroy(text_actual_hp_2);
}

void final_destroy_battle(battle_t *battle, sfRenderWindow *window)
{
    sfRenderWindow_destroy(window);
    sfSprite_destroy(sprite_fighter_1);
    sfSprite_destroy(sprite_fighter_2);
    sfSprite_destroy(sprite_sword);
    sfSprite_destroy(sprite_axe);

    sfRectangleShape_destroy(rect_1);
    sfRectangleShape_destroy(rect_2);
    sfRectangleShape_destroy(rect_3);
    sfRectangleShape_destroy(rect_4);
    sfRectangleShape_destroy(rect_hp);
    sfRectangleShape_destroy(rect_hp_2);

    sfTexture_destroy(texture_battle);
    sfTexture_destroy(texture_weap);

    sfText_destroy(text_hp_1);
    sfText_destroy(text_hp_2);
    sfText_destroy(text_full_hp);
    sfText_destroy(text_full_hp_2);
}
