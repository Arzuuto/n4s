/*
** EPITECH PROJECT, 2021
** n4s
** File description:
** ia.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int check_end(char *message)
{
    int i = find_after_char(message, ':', 3);

    if (message[i] == 'T' && message[i + 1] == 'r') {
        return (EXIT);
    } else {
        return (EXIT_ERROR);
    }
}

int send_commands(char *commands)
{
    char *message = NULL;
    size_t len = 0;

    dprintf(1, "%s\n", commands);
    getline(&message, &len, stdin);
    if (check_end(message) == 0)
        return (EXIT);
    else
        return (SUCCESS);
}

int ia_loop(void)
{
    while (1) {
        if (move_the_car() == EXIT)
            break;
        if (turn_the_car() == EXIT)
            break;
    }
    send_commands("stop_simulation");
    return (SUCCESS);
}