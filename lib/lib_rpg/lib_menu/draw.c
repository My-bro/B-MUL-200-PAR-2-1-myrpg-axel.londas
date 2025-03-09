/*
** EPITECH PROJECT, 2023
** Menu
** File description:
** draw
*/
#include "struct.h"

void draw_vol(menu_t *menu, sfRenderWindow *window)
{
    sfRenderWindow_drawText(window, menu->options.vol.txt, NULL);
    sfRenderWindow_drawRectangleShape(window, vol_but[0].but, NULL);
    sfRenderWindow_drawRectangleShape(window, vol_but[1].but, NULL);
    sfRenderWindow_drawRectangleShape(window, vol_but[2].but, NULL);
    sfRenderWindow_drawSprite(window, vol_but[0].sprite, NULL);
    sfRenderWindow_drawSprite(window, vol_but[1].sprite, NULL);
    sfRenderWindow_drawSprite(window, vol_but[2].sprite, NULL);
}

void draw_main(menu_t *menu, sfRenderWindow *window)
{
    sfRenderWindow_drawText(window, menu->main.txt, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->main.but[0].but, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->main.but[1].but, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->main.but[2].but, NULL);
    sfRenderWindow_drawSprite(window, menu->main.but[0].sprite, NULL);
    sfRenderWindow_drawSprite(window, menu->main.but[1].sprite, NULL);
    sfRenderWindow_drawSprite(window, menu->main.but[2].sprite, NULL);
}

void draw_options(menu_t *menu, sfRenderWindow *window)
{
    sfRenderWindow_drawText(window, menu->options.txt, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->options.but[0].but, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->options.but[1].but, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->options.but[2].but, NULL);
    sfRenderWindow_drawSprite(window, menu->options.but[0].sprite, NULL);
    sfRenderWindow_drawSprite(window, menu->options.but[1].sprite, NULL);
    sfRenderWindow_drawSprite(window, menu->options.but[2].sprite, NULL);
}

void draw_jouer(menu_t *menu, sfRenderWindow *window)
{
    sfRenderWindow_drawText(window, menu->play.txt, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->play.but[0].but, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->play.but[1].but, NULL);
    sfRenderWindow_drawRectangleShape(window, menu->play.but[2].but, NULL);
    sfRenderWindow_drawSprite(window, menu->play.but[0].sprite, NULL);
    sfRenderWindow_drawSprite(window, menu->play.but[1].sprite, NULL);
    sfRenderWindow_drawSprite(window, menu->play.but[2].sprite, NULL);
}
