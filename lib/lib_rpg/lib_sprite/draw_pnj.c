/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** draw_pnj
*/

#include <SFML/Graphics.h>
#include "layer.h"
#include "node.h"
#include "arena_door.h"

int my_strcmp(char const *s1, char const *s2);

void draw_pnj(sfRenderWindow *window, node_map_t *pnj_node)
{
    while (pnj_node != NULL) {
        if (my_strcmp(pnj_node->name,"INRO_PNJ") == 1
|| my_strcmp(pnj_node->name,"GIVER_PNJ") == 1) {
            sfRenderWindow_drawSprite(window, pnj_node->sprite, NULL);
        }
        pnj_node = pnj_node->next;
    }
}

void draw_boss(sfRenderWindow *window, node_map_t *pnj_node
, door_arena_t door_arena)
{
    while (pnj_node != NULL) {
        if (my_strcmp(pnj_node->name,
        "BOSS_LEFT") == 1 && door_arena.left == true
|| my_strcmp(pnj_node->name,"BOSS_MID") == 1 && door_arena.mid == true
|| my_strcmp(pnj_node->name,"BOSS_RIGHT") == 1 && door_arena.right == true) {
            sfRenderWindow_drawSprite(window, pnj_node->sprite, NULL);
        }
        pnj_node = pnj_node->next;
    }
}
