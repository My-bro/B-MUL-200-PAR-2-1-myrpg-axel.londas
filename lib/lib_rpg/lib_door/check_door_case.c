/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** check_door_case
*/

#include <SFML/Graphics.h>
#include <math.h>
#include "node.h"
#include "arena_door.h"
#include <stdio.h>

void check_arena_door(node_map_t *door_node,  door_arena_t *door_arena);

int check_door_case(node_map_t *door_node, sfVector2f circ_pos
, door_arena_t *door_arena)
{
    int i = 0;
    while (door_node != NULL) {
        double dx = (circ_pos.x) - (door_node->vector.x);
        double dy = (circ_pos.y) - (door_node->vector.y);
        float distance = sqrt(dx * dx + dy * dy);
        if (distance < 10) {
            check_arena_door(door_node, door_arena);
            return i;
        }
        door_node = door_node->next;
        i += 1;
    }
    return -1;
}
