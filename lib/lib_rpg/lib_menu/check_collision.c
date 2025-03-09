/*
** EPITECH PROJECT, 2023
** Menu
** File description:
** check_collision
*/

#include "struct.h"
#include "check_collision.h"
#include "draw.h"
#include "check.h"

void create_config_file(void);

int check_collision(sfRectangleShape *button, int view, act_t *action,
sfRenderWindow *window)
{
    sfEvent *event;
    sfVector2i pos;
    sfFloatRect rectangle_bound;
    sfBool is_mouse_hover;
    pos = sfMouse_getPositionRenderWindow(window);
    rectangle_bound = sfRectangleShape_getGlobalBounds(button);
    is_mouse_hover = sfFloatRect_contains(&rectangle_bound, pos.x, pos.y);
    if (is_mouse_hover){
        sfColor red = sfRectangleShape_getFillColor(button);
        if (red.r == 255 && red.g == 255 && red.b == 255){
            sfRectangleShape_setOutlineThickness(button, 2);
            sfRectangleShape_setOutlineColor(button, sfRed);
            check_click(button, view, action, window);
        }
    } else {
        sfRectangleShape_setOutlineThickness(button, 2);
        sfRectangleShape_setOutlineColor(button, sfTransparent);
    }
}

int check_collision_hub3(menu_t *menu, act_t *action, sfRenderWindow *window)
{
    if (action->num_view == 5){
        draw_vol(menu, window);
        for (int i = 0; i < 3; i++){
            action->num_button = i;
            check_collision(menu->options.vol.but[i].but,
menu->options.vol.but[i].associated_view, action, window);
        }
    }
    if (action->num_view == 6){
        sfRenderWindow_drawSprite(window, menu->loading_screen, NULL);
        return -1;
    }
}

int check_collision_hub2(menu_t *menu, act_t *action, sfRenderWindow *window)
{
    if (action->num_view == 2){
        create_config_file();
        action->num_view = 6;
    }
    if (action->num_view == 3){
        action->num_view = 6;
    }
    if (action->num_view == 4){
        draw_options(menu, window);
        for (int i = 0; i < 3; i++){
            action->num_button = i;
            check_collision(opt_but[i].but, opt_but[i].associated_view,
action, window);
        }
    }
    return check_collision_hub3(menu, action, window);

}

int parcell_collision_hub(menu_t *menu, act_t *action)
{
    if (action->num_view == 0){
        draw_main(menu, menu->window);
        for (int i = 0; i < 3; i++){
            action->num_button = i;
            check_collision(main_but[i].but,main_but[i].associated_view,
action, menu->window);
        }
    }
    if (action->num_view == 1){
        draw_jouer(menu, menu->window);
        for (int i = 0; i < 3; i++){
            action->num_button = i;
            check_collision(play_but[i].but, play_but[i].associated_view,
action, menu->window);
        }
    }

}

int check_collision_hub(menu_t *menu, act_t *action, sfRenderWindow *window)
{
    if (action->num_view == -1){
        sfRenderWindow_close(window);
        return -1;
    }
    parcell_collision_hub(menu, action);
    if (check_collision_hub2(menu, action, window) == -1){
        return 0;
    }
}
