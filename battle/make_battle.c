/*
** EPITECH PROJECT, 2023
** make_battle
** File description:
** make_battle
*/

#include <stdlib.h>

#include "battle.h"

void check_actual_hp(battle_t *battle)
{
    text_actual_hp = sfText_create();
    sfText_setString(text_actual_hp, int_to_str(health));
    sfText_setFont(text_actual_hp, sfFont_createFromFile("arial.ttf"));
    sfText_setCharacterSize(text_actual_hp, 24);
    sfText_setFillColor(text_actual_hp, sfWhite);
    sfText_setPosition(text_actual_hp, (sfVector2f){80, 350});

    text_actual_hp_2 = sfText_create();
    sfText_setString(text_actual_hp_2, int_to_str(health_2));
    sfText_setFont(text_actual_hp_2, sfFont_createFromFile("arial.ttf"));
    sfText_setCharacterSize(text_actual_hp_2, 24);
    sfText_setFillColor(text_actual_hp_2, sfWhite);
    sfText_setPosition(text_actual_hp_2, (sfVector2f){1600, 500});
}

void execute_main_battle(battle_t *battle, sfRenderWindow *window)
{
    main_battle(battle);
    check_actual_hp(battle);
    sfRenderWindow_clear(window, sfBlack);
    display_battle(battle, window);
    sfRenderWindow_display(window);
    destroy_text_while(battle);
}

void battle_1(void)
{
    battle_t *battle = malloc(sizeof(battle_t));
    char *str = open_file("battle.txt");
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window;
    sfEvent event;
    window = sfRenderWindow_create(mode, "Test", sfResize | sfClose, NULL);
    char **tab = init_battle(battle, str);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            check_event(event, window, battle);
        }
        execute_main_battle(battle, window);
        if (health <= 0 || health_2 <= 0) {
            break;
        }
        my_k = 0;
    }
    final_destroy_battle(battle, window);
    my_free_battle(tab, str);
    free(battle);
}

void battle_2(void)
{
    battle_t *battle = malloc(sizeof(battle_t));
    char *str = open_file("battle.txt");
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window;
    sfEvent event;
    window = sfRenderWindow_create(mode, "Test", sfResize | sfClose, NULL);
    char **tab = init_battle(battle, str);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            check_event(event, window, battle);
        }
        execute_main_battle(battle, window);
        if (health <= 0 || health_2 <= 0) {
            break;
        }
        my_k = 0;
    }
    final_destroy_battle(battle, window);
    my_free_battle(tab, str);
    free(battle);
}

void battle_3(void)
{
    battle_t *battle = malloc(sizeof(battle_t));
    char *str = open_file("battle.txt");
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window;
    sfEvent event;
    window = sfRenderWindow_create(mode, "Test", sfResize | sfClose, NULL);
    char **tab = init_battle(battle, str);
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            check_event(event, window, battle);
        }
        execute_main_battle(battle, window);
        if (health <= 0 || health_2 <= 0) {
            break;
        }
        my_k = 0;
    }
    final_destroy_battle(battle, window);
    my_free_battle(tab, str);
    free(battle);
}
