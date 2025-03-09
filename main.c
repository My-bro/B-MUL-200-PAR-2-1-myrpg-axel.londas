/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** main
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Graphics/Color.h>
#include <stdbool.h>
#include "node.h"
#include "vector.h"
#include "direction.h"
#include "pixel_colisition.h"
#include "characters.h"
#include "view.h"
#include "layer.h"
#include "graphique.h"
#include "inventory.h"
#include "battle.h"
#include "struct.h"
#include "arena_door.h"
#include "dialogue.h"

node_map_t *init_sprite_config(char *path);
void init_every_struct(view_t *view, animations_t *animations);
node_map_t *init_door_config(void);
void winopen(sfRenderWindow *window ,graph_t graph, inventory_t *inventory
    , view_t view);
char **pars_the_path(char *str,char *sep);
char *buffer_maker(char *path);
node_map_t *add_node(node_map_t **head, node_map_t **tail, node_map_t **node);
int menu_main(menu_t *menu, act_t *action, char *av[]);
node_map_t *init_pnj_config(char *path);
void init_view_struct(view_t *view);

dialogue_t init_menu(void)
{
    dialogue_t dia;
    dia.sprite_key_e = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile
        ("./src/sprite/key/key_e.png", NULL);
    sfSprite_setTexture(dia.sprite_key_e,texture,sfTrue);
    sfSprite_setScale(dia.sprite_key_e,(sfVector2f){0.02,0.02});
    sfSprite_setPosition(dia.sprite_key_e,(sfVector2f){200,200});
    return dia;
}

char **first_battle(battle_t *battle)
{
    char *str = open_file("battle.txt");
    char **tab = init_battle(battle, str);
    return tab;
}

void pre_winopen(struct inventory_s *inventory, sfRenderWindow *window,
sfEvent event)
{
    view_t view;
    animations_t *animations = malloc(sizeof(animations_t));
    init_every_struct(&view, animations);
    node_map_t *map_node = init_sprite_config("./src/config_file/\
config_map_over_world.txt");
    node_map_t *pnj_node = init_pnj_config("./src/config_file/\
config_pnj.txt");
    node_map_t *door_node = init_door_config();
    dialogue_t dialogue = init_menu();
    direction_t colision = {false,false,false,false};
    direction_t direction = {false,false,false,false};
    door_arena_t arena_door = {false,false,false};
    layer_t layer = {map_node,pnj_node,door_node,dialogue,animations->shape,
animations->sprite_characters};
    graph_t graph = {window,event,view,animations,map_node,
pnj_node,door_node,dialogue,colision,direction,layer,arena_door};
    winopen(window , graph, inventory, view);
}

int main(int argc, char **argv)
{
    menu_t menu;
    act_t act;
    if (menu_main(&menu, &act, 0) == -1)
        return 0;
    sfRenderWindow_close(menu.window);
    sfEvent event;
    sfRenderWindow *window = sfRenderWindow_create((sfVideoMode)
    {1920, 1080, 32},"RPG", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    struct inventory_s *inventory = malloc(sizeof(inventory_t));
    init_inventory(inventory, window);
    battle_t *battle = malloc(sizeof(battle_t));
    char **tab = first_battle(battle);
    pre_winopen(inventory, window, event);
    return 0;
}
