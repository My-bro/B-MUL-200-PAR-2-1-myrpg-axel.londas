/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** arena_door
*/

#ifndef ARENA_DOOR_H_
    #include <stdbool.h>
    #define ARENA_DOOR_H_
        typedef struct door_arena_s {
        bool left;
        bool mid;
        bool right;
    } door_arena_t;
#endif /* !ARENA_DOOR_H_ */
