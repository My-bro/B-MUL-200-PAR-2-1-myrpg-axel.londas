/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** check_arena_door
*/

#include <SFML/Graphics.h>
#include "node.h"
#include "arena_door.h"

int my_strcmp(char const *s1, char const *s2);

void check_arena_door(node_map_t *door_node,  door_arena_t *door_arena)
{
    if (my_strcmp(door_node->name,"LEFT_OPEN") == 1) {
        door_arena->left = true;
    }
    if (my_strcmp(door_node->name,"MID_OPEN") == 1) {
        door_arena->mid = true;
    }
    if (my_strcmp(door_node->name,"RIGHT_OPEN") == 1) {
        door_arena->right = true;
    }
    if (my_strcmp(door_node->name,"OUT_ARENA") == 1) {
        door_arena->right = false;
        door_arena->mid = false;
        door_arena->left = false;
    }
}
