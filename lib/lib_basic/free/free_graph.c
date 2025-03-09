/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** arena_door
*/

#include "free.h"

void free_graph(graph_t *graph)
{
    sfRenderWindow_destroy(graph->window);
}
