/*
** EPITECH PROJECT, 2023
** init_battle
** File description:
** init_battle
*/

#include <stdlib.h>

#include "battle.h"

int my_getnrbr(char const *str);

void init_texture_battle(battle_t *battle)
{
    texture_battle = sfTexture_createFromFile("Characters.png", NULL);
    texture_weap = sfTexture_createFromFile("sprite/inventory/item.png", NULL);
    sprite_fighter_1 = sfSprite_create();
    sprite_fighter_2 = sfSprite_create();
    sprite_sword = sfSprite_create();
    sprite_axe = sfSprite_create();
    sfSprite_setTexture(sprite_fighter_1, texture_battle, sfTrue);
    sfSprite_setTexture(sprite_fighter_2, texture_battle, sfTrue);
    sfSprite_setTexture(sprite_sword, texture_weap, sfTrue);
    sfSprite_setTexture(sprite_axe, texture_weap, sfTrue);
}

void init_values_battle(battle_t *battle, char **tab)
{
    dmg_sword = 15;
    dmg_axe = 10;
    dmg_boss_1 = 10;
    health = my_getnrbr(tab[0]);
    health_2 = my_getnrbr(tab[2]);
    total_health = health;
    total_health_2 = health_2;
    my_i = 0;
    my_k = 0;
}

char **init_battle(battle_t *battle, char *str)
{
    init_texture_battle(battle);
    init_frame_rect_battle(battle);
    init_rect_battle(battle);
    char **tab = main_pars_battle(str);
    init_values_battle(battle, tab);
    init_text_battle(battle);
    return tab;
}
