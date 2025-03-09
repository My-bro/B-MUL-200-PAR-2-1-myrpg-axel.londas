/*
** EPITECH PROJECT, 2023
** Menu
** File description:
** init_but
*/
#include "struct.h"
#include "init_but.h"
#include "setup.h"

void init_but_volume(menu_t *menu, sfRenderWindow *window)
{
    menu->options.vol.but[2].associated_view = 4;
    menu->options.vol.but[0].associated_view = 0;
    menu->options.vol.but[1].associated_view = 0;
    menu->options.vol.font = sfFont_createFromFile("arial.ttf");
    menu->options.vol.txt = sfText_create();
    sfText_setPosition(menu->options.vol.txt, (sfVector2f){900, 100});
    sfText_setFont(menu->options.vol.txt, menu->options.vol.font);
    sfText_setString(menu->options.vol.txt, "Volume");
    sfText_setCharacterSize(menu->options.vol.txt, 30);
    setup_vol_texture(menu);
    for (int i = 0; i < 3; i++){
        vol_but[i].but = sfRectangleShape_create();
        sfRectangleShape_setSize(vol_but[i].but, (sfVector2f){500, 130});
        sfRectangleShape_setOrigin(vol_but[i].but, (sfVector2f){250,100});
    }
    sfRectangleShape_setPosition(vol_but[0].but,(sfVector2f){960, 400});
    sfRectangleShape_setPosition(vol_but[1].but,(sfVector2f){960, 600});
    sfRectangleShape_setPosition(vol_but[2].but,(sfVector2f){960, 980});
}

void init_but_jouer(menu_t *menu, sfRenderWindow *window)
{
    menu->play.but[0].associated_view = 2;
    menu->play.but[1].associated_view = 3;
    menu->play.but[2].associated_view = 0;
    menu->play.font = sfFont_createFromFile("arial.ttf");
    menu->play.txt = sfText_create();
    sfText_setPosition(menu->play.txt, (sfVector2f){900, 100});
    sfText_setFont(menu->play.txt, menu->play.font);
    sfText_setString(menu->play.txt, "Jouer");
    sfText_setCharacterSize(menu->play.txt, 30);
    setup_jouer_texture(menu);
    for (int i = 0; i < 3; i++){
        menu->play.but[i].but = sfRectangleShape_create();
        sfRectangleShape_setSize(play_but[i].but, (sfVector2f){500, 130});
        sfRectangleShape_setOrigin(play_but[i].but, (sfVector2f){250,100});
    }
    sfRectangleShape_setPosition(play_but[0].but,(sfVector2f){960, 400});
    sfRectangleShape_setPosition(play_but[1].but,(sfVector2f){960, 600});
    sfRectangleShape_setPosition(play_but[2].but,(sfVector2f){960, 980});
}

void init_but_options(menu_t *menu, sfRenderWindow *window)
{
    menu->options.but[0].associated_view = 4;
    menu->options.but[1].associated_view = 5;
    menu->options.but[2].associated_view = 0;
    menu->options.font = sfFont_createFromFile("arial.ttf");
    menu->options.txt = sfText_create();
    sfText_setPosition(menu->options.txt, (sfVector2f){900, 100});
    sfText_setFont(menu->options.txt, menu->options.font);
    sfText_setString(menu->options.txt, "Options");
    sfText_setCharacterSize(menu->options.txt, 30);
    setup_options_texture(menu);
    for (int i = 0; i < 3; i++){
        menu->options.but[i].but = sfRectangleShape_create();
        sfRectangleShape_setSize(opt_but[i].but, (sfVector2f){500, 130});
        sfRectangleShape_setOrigin(opt_but[i].but, (sfVector2f){250,100});
    }
    sfRectangleShape_setPosition(opt_but[0].but,(sfVector2f){960, 400});
    sfRectangleShape_setPosition(opt_but[1].but,(sfVector2f){960, 600});
    sfRectangleShape_setPosition(opt_but[2].but,(sfVector2f){960, 980});
}

void init_but_main_menu(menu_t *menu, sfRenderWindow *window)
{
    m_main.but[0].associated_view = 1;
    m_main.but[1].associated_view = 4;
    m_main.but[2].associated_view = -1;
    m_main.font = sfFont_createFromFile("arial.ttf");
    m_main.txt = sfText_create();
    setup_main_texture(menu);
    sfText_setPosition(m_main.txt, (sfVector2f){900, 100});
    sfText_setFont(m_main.txt, menu->main.font);
    sfText_setString(m_main.txt, "My_RPG");
    sfText_setCharacterSize(m_main.txt, 30);
    menu->main.but[0].posb.x = 960;
    menu->main.but[0].posb.y = 400;
    for (int i = 0; i < 3; i++){
        menu->main.but[i].but = sfRectangleShape_create();
        sfRectangleShape_setSize(m_main.but[i].but, (sfVector2f){500, 130});
        sfRectangleShape_setOrigin(m_main.but[i].but, (sfVector2f){250,100});
        sfRectangleShape_setPosition(m_main.but[i].but, m_main.but[0].posb);
        m_main.but[0].posb.y += 200;
    }
}
