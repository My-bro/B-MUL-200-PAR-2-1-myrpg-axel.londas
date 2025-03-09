/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** layer
*/

#ifndef LAYER_H_
    #define LAYER_H_
    #include "node.h"
    #include "dialogue.h"
    #include <SFML/Graphics.h>
    typedef struct dialogue_s{
        sfSprite *sprite_key_e;
        sfVector2f pos;
    }dialogue_t;

    typedef struct layer_s {
        node_map_t *map_node;
        node_map_t *pnj_node;
        node_map_t *door_node;
        dialogue_t dialogue;
        sfCircleShape *shape;
        sfSprite *sprite;
    }layer_t;


#endif /* !LAYER_H_ */
