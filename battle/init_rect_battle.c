/*
** EPITECH PROJECT, 2023
** init_rect_battle
** File description:
** init_rect_battle
*/

#include "battle.h"

void set_information_rect(battle_t *battle)
{
    sfSprite_setScale(sprite_fighter_1, (sfVector2f){10, 10});
    sfSprite_setScale(sprite_fighter_2, (sfVector2f){10, 10});
    sfSprite_setScale(sprite_sword, (sfVector2f){10,10});
    sfSprite_setScale(sprite_axe, (sfVector2f){10, 10});

    sfSprite_setPosition(sprite_fighter_1, (sfVector2f){0, 400});
    sfSprite_setPosition(sprite_fighter_2, (sfVector2f){1500, 0});
    sfSprite_setPosition(sprite_sword, (sfVector2f){500, 800});
    sfSprite_setPosition(sprite_axe, (sfVector2f){900, 800});

    sfSprite_setTextureRect(sprite_fighter_1, frameRect_1);
    sfSprite_setTextureRect(sprite_sword, frame_sword);
    sfSprite_setTextureRect(sprite_fighter_2, frameRect_2);
    sfSprite_setTextureRect(sprite_axe, frame_axe);
}

void init_frame_rect_battle(battle_t *battle)
{
    frameRect_1.left = 160;
    frameRect_1.top = 290;
    frameRect_1.width = 32;
    frameRect_1.height = 50;

    frameRect_2.left = 0;
    frameRect_2.top = 240;
    frameRect_2.width = 32;
    frameRect_2.height = 50;

    frame_sword.left = 176;
    frame_sword.top = 0;
    frame_sword.width = 16;
    frame_sword.height = 16;

    frame_axe.left = 192;
    frame_axe.top = 48;
    frame_axe.width = 16;
    frame_axe.height = 16;
    set_information_rect(battle);
}

void init_rect_hp(battle_t *battle)
{
    rect_hp = sfRectangleShape_create();
    sfRectangleShape_setSize(rect_hp, (sfVector2f){170, 30});
    sfRectangleShape_setPosition(rect_hp, (sfVector2f){30, 350});
    sfRectangleShape_setFillColor(rect_hp, sfColor_fromRGB(178, 178, 178));

    rect_hp_2 = sfRectangleShape_create();
    sfRectangleShape_setSize(rect_hp_2, (sfVector2f){170, 30});
    sfRectangleShape_setPosition(rect_hp_2, (sfVector2f){1550, 500});
    sfRectangleShape_setFillColor(rect_hp_2, sfColor_fromRGB(178, 178, 178));
}

void init_rect_battle(battle_t *battle)
{
    rect_1 = sfRectangleShape_create();
    sfRectangleShape_setSize(rect_1, (sfVector2f){300, 200});
    sfRectangleShape_setPosition(rect_1, (sfVector2f){500, 800});
    sfRectangleShape_setFillColor(rect_1, sfWhite);

    rect_2 = sfRectangleShape_create();
    sfRectangleShape_setSize(rect_2, (sfVector2f){300, 200});
    sfRectangleShape_setPosition(rect_2, (sfVector2f){900, 800});
    sfRectangleShape_setFillColor(rect_2, sfWhite);

    rect_3 = sfRectangleShape_create();
    sfRectangleShape_setSize(rect_3, (sfVector2f){300, 200});
    sfRectangleShape_setPosition(rect_3, (sfVector2f){1300, 800});
    sfRectangleShape_setFillColor(rect_3, sfWhite);

    rect_4 = sfRectangleShape_create();
    sfRectangleShape_setSize(rect_4, (sfVector2f){700, 700});
    sfRectangleShape_setPosition(rect_4, (sfVector2f){540, 0});
    sfRectangleShape_setFillColor(rect_4, sfWhite);
    init_rect_hp(battle);
}
