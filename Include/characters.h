/*
** EPITECH PROJECT, 2023
** characters
** File description:
** characters
*/

#ifndef _MY_CHARACTERS_
    #define _MY_CHARACTERS_

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include "direction.h"
    #include "view.h"
    #include "inventory.h"
    #include "arena_door.h"

    // Initialisation Frame
    #define FrameWidth (animations->frameWidth)
    #define FrameHeight (animations->frameHeight)
    #define FrameCount (animations->frameCount)
    #define FrameDuration (animations->frameDuration)

    // Frame
    #define FrameDown (animations->framedown)
    #define FrameLeft (animations->frameleft)
    #define FrameRight (animations->frameright)
    #define FrameUp (animations->frameup)

    // Texture
    #define TextureCharacters (animations->texture_characters)
    #define SpriteCharacters (animations->sprite_characters)

    // Clock
    #define ElapsedTime (animations->elapsedTime)
    #define Clock (animations->clock)
    #define CurrentFrame (animations->currentFrame)

    typedef struct animations_s {
        int frameWidth;
        int frameHeight;
        int frameCount;
        float frameDuration;
        sfIntRect framedown;
        sfIntRect frameleft;
        sfIntRect frameright;
        sfIntRect frameup;
        sfTexture *texture_characters;
        sfSprite *sprite_characters;
        sfClock *clock;
        float elapsedTime;
        int currentFrame;
        sfCircleShape *shape;
        sfVector2f circfrstpos;
        sfVector2f old_pos_circle;
        sfVector2f pos_circle;
    }animations_t;

typedef struct layer_s layer_t;
typedef struct graph_s graph_t;

// Init_values

void init_values_characters(animations_t *animations, view_t view);
void init_texture_characters(animations_t *animations);

// Init_clock
void init_clock(animations_t *characters_animations);


//Check_event
void check_event_axis_y(sfEvent event, animations_t *animations,
direction_t *direction);
void check_event_axis_x(sfEvent event, animations_t *animations,
direction_t *direction);
void check_event_direct(sfEvent event);

//Check_event_axis
void check_event_axis_y_down(animations_t *animations);
void check_event_axis_y_up(animations_t *animations);
void check_clock_axis_x_right(animations_t *animations);
void check_clock_axis_x_left(animations_t *animations);

void reset_direction_bool(graph_t *graph);
void check_direction_input(direction_t *direction);
void move_case(sfRenderWindow *window , graph_t *graph);
float recorder(void);
void draw_colision(sfRenderWindow *window, node_map_t *map_node);
void correct_position(sfRenderWindow *window, graph_t *graph);
void draw_every_layer(sfRenderWindow *window, layer_t *layer
    , door_arena_t door_arena);
sfVector2f move(sfEvent event, sfRenderWindow *window,
sfCircleShape *circle, sfVector2f pos_cam);

#endif /* _MY_CHARACTERS_ */
