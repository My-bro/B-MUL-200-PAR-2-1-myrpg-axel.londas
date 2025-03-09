/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** arena_door
*/

#include "free.h"

void free_all(graph_t *graph, inventory_t *inventory,
    sfRenderWindow *window, view_t *view)
{
    free_graph(graph);
    free_inventory(inventory);
    sfRenderWindow_destroy(window);
}
