/*
** EPITECH PROJECT, 2023
** C Graphical
** File description:
** menu_main
*/
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include "struct.h"
#include "check_collision.h"
#include "init_but.h"
#include "check.h"

void create_config_file(void)
{
    int fichier = open("config.txt", O_WRONLY | O_CREAT | O_TRUNC);

    if (fichier != -1) {
        const char *contenu = "0, 0, 0, 0";
        write(fichier, contenu, 10);
        close(fichier);
    }
}

void loading_screen(menu_t *menu)
{
    sfImage* image = sfImage_createFromFile
("src/sprite/menu/loading_screen.png");
    sfTexture* texture = sfTexture_createFromImage(image, NULL);
    menu->loading_screen = sfSprite_create();
    sfSprite_setTexture(menu->loading_screen, texture, sfTrue);
}

void init_all_but(menu_t *menu)
{
    init_but_main_menu(menu, menu->window);
    init_but_jouer(menu, menu->window);
    init_but_volume(menu, menu->window);
    init_but_options(menu, menu->window);
    loading_screen(menu);
}

int is_six(menu_t *menu, act_t *action, int boucled)
{
    if (action->num_view == 6){
        sfRenderWindow_drawSprite(menu->window, menu->loading_screen, NULL);
        return 1;
    }
    return 0;
}

int menu_main(menu_t *menu, act_t *action, char *av[])
{
    action->num_view = 0;
    int boucled = 0;
    sfVideoMode mode = {1920, 1080, 32};
    menu->window = sfRenderWindow_create(mode, "My_RPG", sfClose, NULL);
    init_all_but(menu);
    while (sfRenderWindow_isOpen(menu->window)){
        sfRenderWindow_pollEvent(menu->window, &menu->event);
        sfRenderWindow_clear(menu->window, sfBlack);
        check_avaibility(menu, menu->window);
        if (check_collision_hub(menu, action, menu->window) == -1){
            sfRenderWindow_close(menu->window);
            return -1;
        }
        if (boucled == 1)
            return 0;
        boucled = is_six(menu, action, boucled);
        sfRenderWindow_display(menu->window);
    }
    sfRenderWindow_destroy(menu->window);
    return 0;
}
