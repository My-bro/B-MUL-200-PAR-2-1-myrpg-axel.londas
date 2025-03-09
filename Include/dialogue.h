/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** graphique
*/

#ifndef DIALOGUE_H_
    #define DIALOGUE_H_

    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <stdbool.h>

typedef struct {
    const char *character_name;
    const char *dialogue_text;
} DialogueEntry;

typedef struct {
    sfFont *font;
    sfText *text;
    sfTexture *texture;
    sfSprite *sprite;
    DialogueEntry *entries;
    size_t num_entries;
    size_t current_entry;
} DialogueManager;

void init_dialogue_manager(DialogueManager *dialogue_manager);
void process_events(sfRenderWindow *window, size_t *current_entry);
void draw_elements(sfRenderWindow *window, DialogueManager *dialogue_manager
, const char *dialogue_text);
bool display_dialogue(sfRenderWindow *window, DialogueManager *dialogue_manager
, const char **dialogue_text);
#endif /* !DIALOGUE_H_ */
