/*
** EPITECH PROJECT, 2023
** Menu
** File description:
** set_sprite
*/

#include "struct.h"

void set_sprite_vol(menu_t *menu, int i, sfImage *image, sfVector2f *pos)
{
    sfTexture* texture = sfTexture_createFromImage(image, NULL);
    menu->options.vol.but[i].sprite = sfSprite_create();
    sfSprite_setTexture(menu->options.vol.but[i].sprite, texture, sfTrue);
    sfSprite_setOrigin(menu->options.vol.but[i].sprite, (sfVector2f){250,100});
    sfSprite_setPosition(menu->options.vol.but[i].sprite, *pos);
}

void set_sprite_main(menu_t *menu, int i, sfImage *image, sfVector2f *pos)
{
    sfTexture* texture = sfTexture_createFromImage(image, NULL);
    menu->main.but[i].sprite = sfSprite_create();
    sfSprite_setTexture(menu->main.but[i].sprite, texture, sfTrue);
    sfSprite_setOrigin(menu->main.but[i].sprite, (sfVector2f){250,100});
    sfSprite_setPosition(menu->main.but[i].sprite, *pos);
}

void set_sprite_options(menu_t *menu, int i, sfImage *image, sfVector2f *pos)
{
    sfTexture* texture = sfTexture_createFromImage(image, NULL);
    menu->options.but[i].sprite = sfSprite_create();
    sfSprite_setTexture(menu->options.but[i].sprite, texture, sfTrue);
    sfSprite_setOrigin(menu->options.but[i].sprite, (sfVector2f){250,100});
    sfSprite_setPosition(menu->options.but[i].sprite, *pos);
}

void set_sprite_jouer(menu_t *menu, int i, sfImage *image, sfVector2f *pos)
{
    sfTexture* texture = sfTexture_createFromImage(image, NULL);
    menu->play.but[i].sprite = sfSprite_create();
    sfSprite_setTexture(menu->play.but[i].sprite, texture, sfTrue);
    sfSprite_setOrigin(menu->play.but[i].sprite, (sfVector2f){250,100});
    sfSprite_setPosition(menu->play.but[i].sprite, *pos);
}
