/*
** EPITECH PROJECT, 2023
** test
** File description:
** test
*/

#ifndef _MY_BATTLE_
    #define _MY_BATTLE_

    #include <SFML/Graphics.h>
    #include <SFML/Window.h>
    #include <SFML/System.h>

typedef struct set_sprite_battle_s {
    sfTexture *texture_battle;
    sfTexture *texture_weapon;
    sfSprite *sprite_fighter_1;
    sfSprite *sprite_fighter_2;
    sfSprite *sprite_sword;
    sfSprite *sprite_axe;
} set_sprite_battle_t;

typedef struct set_frame_battle_rect_s {
    sfIntRect frameRect_1;
    sfIntRect frameRect_2;
    sfIntRect frame_sword;
    sfIntRect frame_axe;
} set_frame_battle_rect_t;

typedef struct set_rect_battle_s {
    sfRectangleShape *rect_1;
    sfRectangleShape *rect_2;
    sfRectangleShape *rect_3;
    sfRectangleShape *rect_4;
    sfRectangleShape *rect_hp;
    sfRectangleShape *rect_hp_2;
} set_rect_battle_t;

typedef struct set_text_battle_s {
    sfText* text_hp_1;
    sfText* text_hp_2;
    sfText* text_full_hp;
    sfText* text_full_hp_2;
} set_text_battle_t;

typedef struct values_battle_s {
    int dmg_sword;
    int dmg_axe;
    int dmg_boss_1;
    int health;
    int health_2;
    int total_health;
    int total_health_2;
    int i;
    int k;
} values_battle_t;

typedef struct battle_s {
    set_sprite_battle_t set_sprite_battle;
    set_frame_battle_rect_t set_frame_battle_rect;
    set_rect_battle_t set_rect_battle;
    set_text_battle_t set_text_battle;
    sfText* text_actual_hp;
    sfText* text_actual_hp_2;
    values_battle_t values_battle;
}battle_t;


// Sprite and texture
    #define texture_battle (battle->set_sprite_battle.texture_battle)
    #define texture_weap (battle->set_sprite_battle.texture_weapon)
    #define sprite_fighter_1 (battle->set_sprite_battle.sprite_fighter_1)
    #define sprite_fighter_2 (battle->set_sprite_battle.sprite_fighter_2)
    #define sprite_sword (battle->set_sprite_battle.sprite_sword)
    #define sprite_axe (battle->set_sprite_battle.sprite_axe)

// Frame
    #define frameRect_1 (battle->set_frame_battle_rect.frameRect_1)
    #define frame_sword (battle->set_frame_battle_rect.frame_sword)
    #define frameRect_2 (battle->set_frame_battle_rect.frameRect_2)
    #define frame_axe (battle->set_frame_battle_rect.frame_axe)

// Rect
    #define rect_hp (battle->set_rect_battle.rect_hp)
    #define rect_hp_2 (battle->set_rect_battle.rect_hp_2)
    #define rect_1 (battle->set_rect_battle.rect_1)
    #define rect_2 (battle->set_rect_battle.rect_2)
    #define rect_3 (battle->set_rect_battle.rect_3)
    #define rect_4 (battle->set_rect_battle.rect_4)

// Text
    #define text_hp_1 (battle->set_text_battle.text_hp_1)
    #define text_hp_2 (battle->set_text_battle.text_hp_2)
    #define text_full_hp (battle->set_text_battle.text_full_hp)
    #define text_full_hp_2 (battle->set_text_battle.text_full_hp_2)
    #define text_actual_hp (battle->text_actual_hp)
    #define text_actual_hp_2 (battle->text_actual_hp_2)

// Values
    #define dmg_sword (battle->values_battle.dmg_sword)
    #define dmg_axe (battle->values_battle.dmg_axe)
    #define dmg_boss_1 (battle->values_battle.dmg_boss_1)
    #define health (battle->values_battle.health)
    #define health_2 (battle->values_battle.health_2)
    #define total_health (battle->values_battle.total_health)
    #define total_health_2 (battle->values_battle.total_health_2)
    #define my_i (battle->values_battle.i)
    #define my_k (battle->values_battle.k)

char **my_taballoc(char *str, int count_letter, int no_letter, int j);
char **my_pars_battle(char *str, char **test);
char *int_to_str(int number);
char *open_file(char const *file_name);

// init_rect_battle
void init_rect_battle(battle_t *battle);
void init_rect_hp(battle_t *battle);
void init_frame_rect_battle(battle_t *battle);
void set_information_rect(battle_t *battle);

// init_text_battle
void init_text_battle(battle_t *battle);
void init_text_battle_2(battle_t *battle);

// my_destroy_battle
void final_destroy_battle(battle_t *battle, sfRenderWindow *window);
void destroy_text_while(battle_t *battle);

// my_utils_main_battle
void my_free_battle(char **tab, char *str);
char **main_pars_battle(char *str);
void main_battle(battle_t *battle);
void main_battle_part_2(battle_t *battle);

// check_event
void check_event(sfEvent event, sfRenderWindow *window, battle_t *battle);
void check_event_rect_battle(sfEvent event, battle_t *battle);

// display_event
void display_battle(battle_t *battle, sfRenderWindow *window);

// init_battle
char **init_battle(battle_t *battle, char *str);
void init_values_battle(battle_t *battle, char **tab);
void init_texture_battle(battle_t *battle);

// make batte
void battle_1(void);
void battle_2(void);
void battle_3(void);

#endif /* _MY_BATTLE_ */
