/*
** EPITECH PROJECT, 2023
** init_text_battle
** File description:
** init_text_battle
*/

#include "battle.h"

void init_text_battle_2(battle_t *battle)
{
    text_full_hp = sfText_create();
    sfText_setString(text_full_hp, int_to_str(total_health));
    sfText_setFont(text_full_hp, sfFont_createFromFile("arial.ttf"));
    sfText_setCharacterSize(text_full_hp, 24);
    sfText_setFillColor(text_full_hp, sfWhite);
    sfText_setPosition(text_full_hp, (sfVector2f){140, 350});

    text_full_hp_2 = sfText_create();
    sfText_setString(text_full_hp_2, int_to_str(total_health_2));
    sfText_setFont(text_full_hp_2, sfFont_createFromFile("arial.ttf"));
    sfText_setCharacterSize(text_full_hp_2, 24);
    sfText_setFillColor(text_full_hp_2, sfWhite);
    sfText_setPosition(text_full_hp_2, (sfVector2f){1650, 500});
}

void init_text_battle(battle_t *battle)
{
    text_hp_1 = sfText_create();
    sfText_setString(text_hp_1, "Hp : ");
    sfText_setFont(text_hp_1, sfFont_createFromFile("arial.ttf"));
    sfText_setCharacterSize(text_hp_1, 24);
    sfText_setFillColor(text_hp_1, sfWhite);
    sfText_setPosition(text_hp_1, (sfVector2f){30, 350});

    text_hp_2 = sfText_create();
    sfText_setString(text_hp_2, "Hp : ");
    sfText_setFont(text_hp_2, sfFont_createFromFile("arial.ttf"));
    sfText_setCharacterSize(text_hp_2, 24);
    sfText_setFillColor(text_hp_2, sfWhite);
    sfText_setPosition(text_hp_2, (sfVector2f){1550, 500});
    init_text_battle_2(battle);
}
