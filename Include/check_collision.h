/*
** EPITECH PROJECT, 2023
** Menu
** File description:
** check_collision
*/

#ifndef CHECK_COLLISION_H_
    #define CHECK_COLLISION_H_
    #define play_but (menu->play.but)
    #define main_but (menu->main.but)
    #define opt_but (menu->options.but)
    #include "struct.h"
int check_collision_hub(menu_t *menu, act_t *action, sfRenderWindow *window);
int check_collision_hub2(menu_t *menu, act_t *action, sfRenderWindow *window);
int check_collision(sfRectangleShape *button, int view, act_t *action,
sfRenderWindow *window);
#endif /* !CHECK_COLLISION_H_ */
