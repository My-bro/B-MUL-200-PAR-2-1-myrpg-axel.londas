/*
** EPITECH PROJECT, 2023
** Menu
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_
    #define vol_but (menu->options.vol.but)
    #include <SFML/Graphics.h>

typedef struct button_s{
    sfRectangleShape *but;
    sfSprite *sprite;
    int associated_view;
    sfText *txt;
    sfTexture *text;
    sfVector2f posb;
    sfVector2f post;
}button_t;

typedef struct main_s{
    button_t but[3];
    sfText *txt;
    sfFont *font;
    sfVector2f post;
}main_t;

typedef struct load_game_s{
    button_t but[5];
    sfText *txt;
    sfFont *font;
}load_game_t;

typedef struct new_game_s{
    button_t but[3];
    sfText *txt;
    sfFont *font;
}new_game_t;

typedef struct play_s{
    new_game_t new_game;
    load_game_t load_game;
    button_t but[3];
    sfText *txt;
    sfFont *font;
    sfVector2f post;
}play_t;

typedef struct resolution_s{
    button_t but[3];
    sfText *txt;
    sfFont *font;
}resolution_t;

typedef struct volume_s{
    button_t but[3];
    sfText *txt;
    sfFont *font;
}volume_t;

typedef struct options_s{
    resolution_t res;
    volume_t vol;
    button_t but[3];
    sfText *txt;
    sfFont *font;
}options_t;

typedef struct menu_s{
    sfRenderWindow *window;
    sfEvent event;
    main_t main;
    play_t play;
    options_t options;
    sfSprite *loading_screen;
}menu_t;

typedef struct act_s{
    int num_view;
    int num_button;
}act_t;

#endif /* !STRUCT_H_ */
