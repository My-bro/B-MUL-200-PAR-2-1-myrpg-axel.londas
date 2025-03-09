/*
** EPITECH PROJECT, 2023
** print_number
** File description:
** print_number
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *put_to_str(int number, char *str, int *i, int *is_negative)
{
    while (number > 0) {
        str[*i] = number % 10 + '0';
        number = number / 10;
        *i = *i + 1;
    }
    if (*is_negative == 1) {
        str[*i] = '-';
        *i = *i +1;
    }
}

char *int_to_str(int number)
{
    char *str = malloc(sizeof(char) * 10);
    int i = 0;
    int is_negative = 0;
    if (number < 0) {
        is_negative = 1;
        number = number * (-1);
    }
    put_to_str(number, str, &i, &is_negative);
    str[i] = '\0';
    for (int j = 0; j < i / 2; j++) {
        char temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }
    return str;
}
