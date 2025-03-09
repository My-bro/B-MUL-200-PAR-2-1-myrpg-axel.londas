/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** winopen
*/

#include <SFML/Audio.h>

#include "characters.h"
#include "direction.h"
#include "inventory.h"
#include "battle.h"

void init_music(sfMusic *music);

void exec_event(sfRenderWindow *window, sfEvent *event,
animations_t *animations, direction_t *direction);

void free_all(graph_t *graph, inventory_t *inventory
    , sfRenderWindow *window, view_t *view);

void process_commmand(sfRenderWindow *window, graph_t *graph
    , inventory_t *inventory)
{
    check_direction_input(&graph->direction);
    move_case(window , graph);
    recorder();
    correct_position(window, graph);
    draw_every_layer(window, &graph->layer, graph->arena_door);
    inventory_is_open(inventory, window, graph->view);
    sfRenderWindow_display(window);
}

void check_direction(graph_t graph)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        check_event_axis_x(graph.event, graph.animations, &graph.direction);
        check_event_axis_y(graph.event, graph.animations, &graph.direction);
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        check_event_axis_x(graph.event, graph.animations, &graph.direction);
        check_event_axis_y(graph.event, graph.animations, &graph.direction);
    }
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        check_event_axis_x(graph.event, graph.animations, &graph.direction);
        check_event_axis_y(graph.event, graph.animations, &graph.direction);
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        check_event_axis_x(graph.event, graph.animations, &graph.direction);
        check_event_axis_y(graph.event, graph.animations, &graph.direction);
    }
}

void winopen(sfRenderWindow *window ,graph_t graph, inventory_t *inventory
    , view_t view)
{
    while (sfRenderWindow_isOpen(window)) {
        sfTime elapsed = sfClock_getElapsedTime(inventory->keyDelayClock);
        float elapsedSeconds = sfTime_asSeconds(elapsed);
        sfRenderWindow_clear(window, sfBlack);
        reset_direction_bool(&graph);
        while (sfRenderWindow_pollEvent(window, &graph.event)) {
            handle_drag_and_drop(inventory, window, &graph.event, view);
            exec_event(window, &graph.event, graph.animations
                , &graph.direction);
        }
        check_direction(graph);
        inventory->inventory_open = inventory_status(inventory->inventory_open
        , inventory->keyDelayClock, elapsedSeconds, &inventory->keyAReleased);
        process_commmand(window, &graph, inventory);
    }
    free_all(&graph, inventory, window, &view);
}
