/*
** EPITECH PROJECT, 2023
** Menu
** File description:
** init_but
*/

#ifndef INIT_BUT_H_
    #define INIT_BUT_H_
    #define play_but (menu->play.but)
    #define opt_but (menu->options.but)
    #define m_main (menu->main)
    #include "struct.h"
void init_but_jouer(menu_t *menu, sfRenderWindow *window);
void init_but_options(menu_t *menu, sfRenderWindow *window);
void init_but_main_menu(menu_t *menu, sfRenderWindow *window);
void init_but_volume(menu_t *menu, sfRenderWindow *window);
#endif /* !INIT_BUT_H_ */
