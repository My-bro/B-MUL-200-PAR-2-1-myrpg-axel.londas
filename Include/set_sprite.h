/*
** EPITECH PROJECT, 2023
** Menu
** File description:
** set_sprite
*/

#ifndef SET_SPRITE_H_
    #define SET_SPRITE_H_
    #include "struct.h"
void set_sprite_options(menu_t *menu, int i, sfImage *image, sfVector2f *pos);
void set_sprite_main(menu_t *menu, int i, sfImage *image, sfVector2f *pos);
void set_sprite_jouer(menu_t *menu, int i, sfImage *image, sfVector2f *pos);
void set_sprite_vol(menu_t *menu, int i, sfImage *image, sfVector2f *pos);

#endif /* !SET_SPRITE_H_ */
