/*
** EPITECH PROJECT, 2021
** init_list.c
** File description:
** UwU
*/

#include "../include/pushswap.h"

static int init_list(t_node *start_list, char **av, int ac, int status)
{
    int index = 0;

    if (status == false)
        index = 2;
    else 
        index = 3;
    while (index < ac) {
        if (give_in_list(start_list, av[index]) == EXIT_FAILURE) {
            my_printf("malloc failed");
            return (84);
        }
        index++;
    }
    return (0);
}
