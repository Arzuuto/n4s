/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** utils.c
*/

#include <stdlib.h>

int find_after_char(char *str, char c, int nb)
{
    int x = 0;

    for (int i = 0; str[i] != '\0'; i += 1) {
        if (str[i] == c)
            x += 1;
        if (str[i] == c && x == nb)
            return (i + 1);
    }
    return (0);
}