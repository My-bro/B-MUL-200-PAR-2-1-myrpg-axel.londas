/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** draw_door
*/

#include <SFML/Graphics.h>
#include "node.h"
#include <stdio.h>

void draw_door(sfRenderWindow *window, node_map_t *map_node)
{
    int i = 0;
    while (map_node != NULL) {
        sfRenderWindow_drawCircleShape(window, map_node->door, NULL);
        map_node = map_node->next;
        ++i;
    }
}
