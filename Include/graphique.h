/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** graphique
*/

#ifndef GRAPHIQUE_H_
    #define GRAPHIQUE_H_
    #include <SFML/Graphics.h>
    #include "node.h"
    #include "vector.h"
    #include "direction.h"
    #include "pixel_colisition.h"
    #include "characters.h"
    #include "view.h"
    #include "layer.h"
    #include "arena_door.h"
    #include "dialogue.h"
    #define LAYER_H_

    typedef struct animations_s animations_t;

    typedef struct graph_s {
        sfRenderWindow *window;
        sfEvent event;
        view_t view;
        animations_t *animations;
        node_map_t *map_node;
        node_map_t *pnj_node;
        node_map_t *door_node;
        dialogue_t dialogue;
        direction_t colision;
        direction_t direction;
        layer_t layer;
        door_arena_t arena_door;
    } graph_t;
    #define FRAME_LIMITE 60
#endif /* !GRAPHIQUE_H_ */
