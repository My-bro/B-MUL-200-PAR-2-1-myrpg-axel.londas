/*
** EPITECH PROJECT, 2023
** Menu
** File description:
** check
*/

#ifndef CHECK_H_
    #define CHECK_H_
    #include "struct.h"
int check_config_file(void);
void check_avaibility(menu_t *menu, sfRenderWindow *window);
int check_click(sfRectangleShape *button, int view, act_t *action,
sfRenderWindow *window);
#endif /* !CHECK_H_ */
