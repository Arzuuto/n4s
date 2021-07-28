/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** value.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

float *get_value(char *message)
{
    char **stock = str_to_tab(message, ":");
    float *value;
    float len = 0;
    int j = 0;

    for (int i = 0; stock[i] != NULL; i += 1)
        len += 1;
    value = malloc(sizeof(float) * len);
    for (int i = 3; i < 35; i += 1) {
        value[j] = atof(stock[i]);
        j += 1;
    }
    return (value);
}