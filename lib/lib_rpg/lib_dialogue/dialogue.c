/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** graphique
*/

#include <stdbool.h>
#include "dialogue.h"

void init_dialogue_manager(DialogueManager *dialogue_manager)
{
    dialogue_manager->font = sfFont_createFromFile("old_font.ttf");
    dialogue_manager->text = sfText_create();
    sfText_setFont(dialogue_manager->text, dialogue_manager->font);
    sfText_setCharacterSize(dialogue_manager->text, 40);
    sfText_setFillColor(dialogue_manager->text, sfBlack);
    sfText_setPosition(dialogue_manager->text, (sfVector2f){170, 780});
    dialogue_manager->texture = sfTexture_createFromFile("dialogue.png", NULL);
    dialogue_manager->sprite = sfSprite_create();
    sfSprite_setTexture(dialogue_manager->sprite, dialogue_manager->texture
    , sfTrue);
    sfSprite_scale(dialogue_manager->sprite, (sfVector2f){2.2, 2.2});
    sfSprite_setPosition(dialogue_manager->sprite, (sfVector2f){20, -50});
}

void process_events(sfRenderWindow *window, size_t *current_entry)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
        if (event.type == sfEvtMouseButtonPressed) {
            (*current_entry)++;
        }
    }
}

void draw_elements(sfRenderWindow *window, DialogueManager *dialogue_manager,
const char *dialogue_text)
{
    sfText_setString(dialogue_manager->text, dialogue_text);
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, dialogue_manager->sprite, NULL);
    sfRenderWindow_drawText(window, dialogue_manager->text, NULL);
    sfRenderWindow_display(window);
}

bool display_dialogue(sfRenderWindow *window, DialogueManager *dialogue_manager
, const char **dialogue_text)
{
    size_t num_entries = 0;
    while (dialogue_text[num_entries] != NULL) {
        num_entries++;
    }
    size_t current_entry = 0;
    while (current_entry < num_entries && sfRenderWindow_isOpen(window)) {
        process_events(window, &current_entry);
        draw_elements(window, dialogue_manager, dialogue_text[current_entry]);
    }
    return current_entry == num_entries;
}
