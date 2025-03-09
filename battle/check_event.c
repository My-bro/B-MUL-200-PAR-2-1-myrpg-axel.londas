/*
** EPITECH PROJECT, 2023
** check_event
** File description:
** check_event
*/

#include "battle.h"

void check_event_rect_battle(sfEvent event, battle_t *battle)
{
    if (event.mouseButton.button == sfMouseLeft) {
        sfFloatRect bounds_rect_1 = sfRectangleShape_getGlobalBounds(rect_1);
        sfFloatRect bounds_rect_2 = sfRectangleShape_getGlobalBounds(rect_2);
        sfFloatRect bounds_rect_3 = sfRectangleShape_getGlobalBounds(rect_3);
        if (sfFloatRect_contains(&bounds_rect_1,
        event.mouseButton.x, event.mouseButton.y)) {
            my_k = 1;
        }
        if (sfFloatRect_contains(&bounds_rect_2,
        event.mouseButton.x, event.mouseButton.y)) {
            my_k = 2;
        }
        if (sfFloatRect_contains(&bounds_rect_3,
        event.mouseButton.x, event.mouseButton.y)) {
            my_k = 3;
        }
    }
}

void check_event(sfEvent event, sfRenderWindow *window, battle_t *battle)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(window);
    }
    if (event.type == sfEvtMouseButtonPressed) {
        check_event_rect_battle(event, battle);
    }
}
