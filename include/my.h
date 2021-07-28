/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my
*/

#ifndef _MY_H_
#define _MY_H_

#define EXIT (1)
#define EXIT_ERROR (84)
#define SUCCESS (0)

void my_putchar(char c);
void my_putstr(char const *str);
void my_put_nbr(int nb);
void my_printf(char *str, ...);
void my_put_strocta(char *str);
void my_put_hexa(int nb);
void my_puthexa_upper(int nb);
void my_put_address(long int nb);
void my_insigned_nbr(unsigned nb);
void my_put_octa(int nb);
void my_put_binary(int nb);
int my_compute_power_it(int nb, int p);
char *my_revstr(char *str);
int my_strlen(char const *str);
int my_atoi(char *str);

void free_array(float *value);
int check_end(char *message);
int find_after_char(char *str, char c, int nb);
char **str_to_tab(char *str, char *filter);
float *get_value(char *message);
int move_the_car(void);
int turn_the_car(void);
int ia_loop(void);
int send_commands(char *commands);
int main(int argc, char **argv);

#endif