/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** draw_every_layer
*/

#include <SFML/Graphics.h>
#include <stdio.h>
#include "layer.h"
#include "node.h"
#include "arena_door.h"
#include "math.h"
#include "dialogue.h"
#include "battle.h"

void draw_door(sfRenderWindow *window, node_map_t *map_node);
void draw_map_base(sfRenderWindow *window, node_map_t *map_node);
void draw_map_layer(sfRenderWindow *window, node_map_t *map_node);
void draw_pnj(sfRenderWindow *window, node_map_t *pnj_node);
void draw_boss(sfRenderWindow *window, node_map_t *pnj_node,
door_arena_t door_arena);
int my_strcmp(char const *s1, char const *s2);

void check_png_battle(door_arena_t door_arenam, node_map_t *pnj_node)
{
    if (sfKeyboard_isKeyPressed(sfKeyE) && my_strcmp(pnj_node->name,
    "BOSS_LEFT") == 1 && door_arenam.left == true) {
        battle_1();
    }
    if (sfKeyboard_isKeyPressed(sfKeyE) && my_strcmp(pnj_node->name,
    "BOSS_MID") == 1 && door_arenam.mid == true) {
        battle_2();
    }
    if (sfKeyboard_isKeyPressed(sfKeyE) && my_strcmp(pnj_node->name,
    "BOSS_RIGHT") == 1 && door_arenam.right == true) {
        battle_3();
    }
}

void check_dialogue_case(node_map_t *pnj_node, sfVector2f circ_pos
, door_arena_t door_arenam, dialogue_t dialogue)
{
    while (pnj_node != NULL) {
        double dx = (circ_pos.x) - (pnj_node->vector.x);
        double dy = (circ_pos.y) - (pnj_node->vector.y);
        float distance = sqrt(dx * dx + dy * dy);
        if (distance < 40) {
            sfSprite_setPosition(dialogue.sprite_key_e,
(sfVector2f){pnj_node->vector.x + 10, pnj_node->vector.y - 10});
        }
        pnj_node = pnj_node->next;
        check_png_battle(door_arenam, pnj_node);
    }
}

void draw_every_layer(sfRenderWindow *window, layer_t *layer
    , door_arena_t door_arena)
{
    draw_map_base(window, layer->map_node);
    draw_pnj(window, layer->pnj_node);
    draw_boss(window, layer->pnj_node, door_arena);
    sfRenderWindow_drawSprite(window, layer->sprite, NULL);
    sfVector2f pos_circle = sfCircleShape_getPosition(layer->shape);
    check_dialogue_case(layer->pnj_node, pos_circle
        , door_arena, layer->dialogue);
    sfRenderWindow_drawSprite(window, layer->dialogue.sprite_key_e, NULL);
    draw_map_layer(window, layer->map_node);
}
