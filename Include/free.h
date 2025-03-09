/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** free.h
*/

#ifndef FREE_H_
    #define FREE_H_
    #include "inventory.h"

void free_all(graph_t *graph, inventory_t *inventory
    , sfRenderWindow *window, view_t *view);

void free_graph(graph_t *graph);
void free_inventory(inventory_t *inventory);
#endif /* FREE_H_ */
