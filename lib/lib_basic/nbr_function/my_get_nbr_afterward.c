/*
** EPITECH PROJECT, 2022
** suite
** File description:
** cuiiire
*/

#include <unistd.h>

int is_num_op(char c)
{
    if (c >= 48 && c <= 57 || c == 45 || c == 43 ) {
        return (1);
    } else {
        return (0);
    }

}

int is_num(char c)
{
    if (c >= 48 && c <= 57) {
        return (1);
    } else {
        return (0);
    }

}

int when_debut(char const *str)
{
    int i = 0;
    while (is_num(str[i]) != 1 ) {
        if (str[i] == '\0') {
            return (i);
        }
        i++;
    }
    return (i);
}

int how_many_nbr(char const *str)
{
    int i = when_debut(str);
    int count = 0;
    if (str[i] == '\0') {
        return (0);
    }
    while (is_num(str[i]) == 1) {
        if (str[i] == '\0') {
            return (count);
        }
        ++i;
        ++count;
    }
    return count;
}
