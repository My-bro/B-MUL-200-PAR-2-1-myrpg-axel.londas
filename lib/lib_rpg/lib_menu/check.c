/*
** EPITECH PROJECT, 2023
** Menu
** File description:
** check
*/

#include "struct.h"
#include <sys/stat.h>
#include <fcntl.h>

int check_config_file(void)
{
    int fichier = open("config.txt",O_WRONLY);
    struct stat save;
    stat("config.txt", &save);
    if (save.st_size < 1){
        return -1;
    }
    return 0;
}

void check_avaibility(menu_t *menu, sfRenderWindow *window)
{
    if (check_config_file() == -1){
        sfRectangleShape_setFillColor(menu->play.but[1].but, sfRed);
        sfRectangleShape_setFillColor(menu->play.but[0].but, sfWhite);
    } else {
        sfRectangleShape_setFillColor(menu->play.but[0].but, sfRed);
        sfRectangleShape_setFillColor(menu->play.but[1].but, sfWhite);
    }
}

int check_click(sfRectangleShape *button, int view, act_t *action,
sfRenderWindow *window)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)){
        sfTime delay = sfMilliseconds(200);
        sfSleep(delay);
        action->num_view = view;
    }
}
