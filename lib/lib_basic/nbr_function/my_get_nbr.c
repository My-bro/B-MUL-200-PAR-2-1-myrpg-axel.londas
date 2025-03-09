/*
** EPITECH PROJECT, 2022
** transforme a string to a int
** File description:
** azerty
*/

#include <stdio.h>
#include <unistd.h>

int is_num_op(char c);
int is_num(char c);
int when_debut(char const *str);
int how_many_nbr(char const *str);


int const plus = 43;
int const moins = 45;

int what_is_the_op(char const *str)
{
    int i = when_debut(str);
    int values;
    if (i == 0) {
        return (1);
    }
    if (str[i - 1] == plus || is_num_op(str[i - 1]) == 0) {
        return (1);

    } else {
        return (-1);
    }
}

int power(int src,int mlt)
{
    int a = mlt;
    int c_src = src;
    int i = 0;
    if (mlt == 0) {
        return (1);
    }
    while (a != 1) {
        src = src * c_src;
        --a;
    }
    return src;
}

int my_getnrbr(char const *str)
{
    int values = 0;
    int i = when_debut(str);
    int op = what_is_the_op(str);
    int taille_nbr = how_many_nbr(str);
    while (taille_nbr > 0) {
        values += (str[i] - 48) * (power(10,taille_nbr - 1));
        --taille_nbr;
        ++i;
    }
    if (values > 32767) {
        return (0);
    }
    return (((values * op)));
}
