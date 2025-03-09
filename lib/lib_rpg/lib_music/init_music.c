/*
** EPITECH PROJECT, 2023
** Epitech-Jam
** File description:
** init_music
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>

void init_music(sfMusic *music)
{
    music = sfMusic_createFromFile("musique.ogg");
    sfMusic_play(music);
    sfMusic_setVolume(music, 50);
    sfMusic_setLoop(music, sfTrue);
}
