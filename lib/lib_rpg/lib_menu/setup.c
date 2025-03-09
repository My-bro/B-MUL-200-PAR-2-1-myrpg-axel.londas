/*
** EPITECH PROJECT, 2023
** Menu
** File description:
** setup
*/

#include "struct.h"
#include <stdlib.h>
#include "set_sprite.h"

void setup_vol_texture(menu_t *menu)
{
    sfImage* images[3];
    images[0] = sfImage_createFromFile("src/sprite/menu/son_but.png");
    images[1] = sfImage_createFromFile("src/sprite/menu/musique_but.png");
    images[2] = sfImage_createFromFile("src/sprite/menu/return.png");
    int y = 400;
    for (int i = 0; i < 3; i++){
        set_sprite_vol(menu, i, images[i], &(sfVector2f){960, y});
        if (i == 0){
            y = 600;
        }
        if (i == 1){
            y = 980;
        }
    }
}

void setup_options_texture(menu_t *menu)
{
    sfImage* images[3];
    images[0] = sfImage_createFromFile("src/sprite/menu/resolution_option.png");
    images[1] = sfImage_createFromFile("src/sprite/menu/audio_option.png");
    images[2] = sfImage_createFromFile("src/sprite/menu/return.png");
    int y = 400;
    for (int i = 0; i < 3; i++){
        set_sprite_options(menu, i, images[i], &(sfVector2f){960, y});
        if (i == 0){
            y = 600;
        }
        if (i == 1){
            y = 980;
        }
    }
}

void setup_jouer_texture(menu_t *menu)
{
    sfImage* images[3];
    images[0] = sfImage_createFromFile("src/sprite/menu/new_game.png");
    images[1] = sfImage_createFromFile("src/sprite/menu/load_game.png");
    images[2] = sfImage_createFromFile("src/sprite/menu/return.png");
    int y = 400;
    for (int i = 0; i < 3; i++){
        set_sprite_jouer(menu, i, images[i], &(sfVector2f){960, y});
        if (i == 0){
            y = 600;
        }
        if (i == 1){
            y = 980;
        }
    }
}

void setup_main_texture(menu_t *menu)
{
    sfImage* images[3];
    images[0] = sfImage_createFromFile("src/sprite/menu/play_button.png");
    images[1] = sfImage_createFromFile("src/sprite/menu/options_button.png");
    images[2] = sfImage_createFromFile("src/sprite/menu/leave_button.png");
    int y = 400;
    for (int i = 0; i < 3; i++){
        set_sprite_main(menu, i, images[i], &(sfVector2f){960, y});
        y += 200;
    }
}
