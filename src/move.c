/*
** EPITECH PROJECT, 2021
** B-AIA-200-PAR-2-1-n4s-kaan.bouldoires
** File description:
** move
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my.h"

static float choose_direction_value(float distance, float direction)
{
    if (distance < 1500)
        direction = 0.05;
    if (distance < 1000)
        direction = 0.2;
    if (distance < 600)
        direction = 0.3;
    if (distance < 400)
        direction = 0.35;
    if (distance < 100)
        direction = 0.4;
    return (direction);
}

static int manage_direction(float distance, float left, float right)
{
    char *message = NULL;
    size_t len = 0;
    float direction = 0;

    direction = choose_direction_value(distance, direction); 
    if (left - right < 0)
        direction = -(direction);
    dprintf(1, "wheels_dir:%f\n", direction);
    getline(&message, &len, stdin);
    if (message == NULL || check_end(message) == EXIT)
        return (EXIT);
    else
        return (SUCCESS);
}

int turn_the_car(void)
{
    char *message = NULL;
    size_t len = 0;
    float *value;
    int ret = 0;

    dprintf(1, "get_info_lidar\n");
    getline(&message, &len, stdin);
    if (message == NULL || check_end(message) == EXIT)
        return (EXIT);
    value = get_value(message);
    if (value == NULL)
        return (EXIT);
    ret = manage_direction(value[16], value[1], value[31]);
    if (ret == 1)
        return (EXIT);
    else
        return (SUCCESS);
}