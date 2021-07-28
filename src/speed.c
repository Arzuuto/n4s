/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** speed
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

static float choose_speed_value(float distance, float speed)
{
    if (distance <= 2000)
        speed = 0.75;
    if (distance <= 1500)
        speed = 0.45;
    if (distance <= 1000)
        speed = 0.35;
    if (distance <= 600)
        speed = 0.2;
    if (distance <= 250)
        speed = 0.15;
    if (distance <= 100)
        speed = 0.05;
    return (speed);
}

static int manage_speed(float distance)
{
    char *message = NULL;
    size_t len = 0;
    float speed = 0.8;

    speed = choose_speed_value(distance, speed);
    dprintf(1, "car_forward:%f\n", speed);
    getline(&message, &len, stdin);
    if (message == NULL || check_end(message) == EXIT)
        return (EXIT);
    else
        return (SUCCESS);
}

int move_the_car(void)
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
    ret = manage_speed(value[16]);
    if (ret == EXIT)
        return (EXIT);
    else
        return (SUCCESS);
}
