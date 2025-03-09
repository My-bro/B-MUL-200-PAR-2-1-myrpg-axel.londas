/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** inventory.h
*/

#ifndef MY_RPG_INVENTORY_H
    #define MY_RPG_INVENTORY_H
    // include needed libraries in my_rpg project
    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <stdbool.h>
    #include "inventory_struct.h"
    #include "view.h"
    #include "graphique.h"
    #include "characters.h"

    #define BUTTON event->mouseButton.button

typedef struct inventory_s inventory_t;
typedef struct graph_s graph_t;

// armor.c Prototypes vv

void inv_armor(inventory_t *inventory, sfRenderWindow *window
    , sfEvent *event, view_t view);


// display.c Prototypes vv

void inv_draw_item(inventory_t *inventory, sfRenderWindow *window
    , view_t view, int i);
int inventory_status(int inventory_open, sfClock *keyDelayClock
    , float elapsedSeconds, bool *keyAReleased);


// init_inventory.c Prototypes vv

void inv_init_armor(inventory_t *inventory, sfRenderWindow *window);
void inv_init_inventory_item(inventory_t *inventory, sfRenderWindow *window);
void init_inventory(inventory_t *inventory, sfRenderWindow *window);
sfIntRect** create_sprite_rects(int sprite_width, int sprite_height
    , int sheet_width, int sheet_height);


// interaction.c Prototypes vv

void handle_drag_and_drop(inventory_t *inventory, sfRenderWindow *window
    , sfEvent *event, view_t view);
void inv_get_item_to_armor(inventory_t *inventory, int item_x, int item_y);
void inv_drag_item(struct inventory_s *inventory, sfRenderWindow *window
    , view_t view);
void inv_trash(inventory_t *inventory, sfRenderWindow *window, sfEvent *event
    , view_t view);

// inventory.c Prototypes vv

void inventory_is_open(struct inventory_s *inventory, sfRenderWindow *window
    , view_t view);
bool add_item_to_inventory(inventory_t *inventory, int item);

// mouse_event.c Prototypes vv

void mouseleft_pressed(inventory_t *inventory, sfRenderWindow *window
    , sfEvent *event, view_t view);
void mouseleft_released(inventory_t *inventory, sfRenderWindow *window
    , sfEvent *event, view_t view);

void winopen(sfRenderWindow *window, graph_t graph, inventory_t *inventory
    , view_t view);

#endif //MY_RPG_INVENTORY_H
