/*
** EPITECH PROJECT, 2023
** my_utils_main_battle
** File description:
** my_utils_main_battle
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "battle.h"

void main_battle_part_2(battle_t *battle)
{
    if (my_k == 2) {
        health = health - dmg_boss_1;
        if (health <= 0) {
            health = 0;
        }
        health_2 = health_2 - dmg_axe;
        if (health_2 <= 0) {
            health_2 = 0;
        }
        health = health + 5;
    }
    if (my_k == 3) {
        printf("L'aventurier utilise son attaque spéciale\n");
    }
}

void main_battle(battle_t *battle)
{
    if (my_k == 1) {
        health = health - dmg_boss_1;
        if (health <= 0) {
            health = 0;
        }
        health_2 = health_2 - dmg_sword;
        if (health_2 <= 0) {
            health_2 = 0;
        }
    }
    main_battle_part_2(battle);
}

char **main_pars_battle(char *str)
{
    int count_letter = 0;
    int no_letter = 0;
    int j = 0;

    char **tab = my_taballoc(str, count_letter, no_letter, j);
    tab = my_pars_battle(str, tab);
    return tab;
}

void my_free_battle(char **tab, char *str)
{
    int l = 0;

    while (tab[l] != NULL) {
        free(tab[l]);
        l++;
    }
    free(tab);
    free(str);
}
