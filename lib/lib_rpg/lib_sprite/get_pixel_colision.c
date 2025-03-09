/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** get_pixel_colision
*/

#include <SFML/Graphics.h>
#include <stdio.h>
#include "../../../Include/pixel_colisition.h"
#include "../../../Include/node.h"

int my_strcmp(char const *s1, char const *s2);

void get_pixel_colision(pixel_colition_t *pixel_colision
    , node_map_t *map_node,  sfVector2f pos_circle)
{
    int x = 0;
    int y = 0;
    while (map_node != NULL) {
        x = map_node->vector.x;
        y = map_node->vector.y;
        if (my_strcmp(map_node->type,"Colision") == 1) {
            pixel_colision->Color_left = sfImage_getPixel(map_node->image
                , pos_circle.x - 2 - x , pos_circle.y + 5 - y);
            pixel_colision->Color_right = sfImage_getPixel(map_node->image
                , pos_circle.x + 20 - x , pos_circle.y - y);
            pixel_colision->Color_up = sfImage_getPixel(map_node->image
                , pos_circle.x + 5 - x , pos_circle.y - 2 - y);
            pixel_colision->Color_down = sfImage_getPixel(map_node->image
                , pos_circle.x + 5 - x , pos_circle.y + 12 - y);
        }
        map_node = map_node->next;
    }
}
