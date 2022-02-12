/*
** EPITECH PROJECT, 2021
** mai"n".c
** File description:
** UwU
*/

#include "../include/pushswap.h"

int main (char **av, int ac)
{
    t_node *l_a_begin;
    t_node *l_a_end;
    int status = false;

    if (ac < 2) {
        my_printf ("Usage: ./pushswap [nbr_a] [nbr_b][nbr_c] [...]\n");
        return (84);
    }
    if (av[1][1] == '-' && av[1][2] == 'v')
        status = true;
    if ((l_a_begin = malloc(sizeof(t_node))) == NULL) {
        my_printf("Malloc failed, return(84)");
        return (84);
    }
    if (status == false)
        l_a_begin->nb = av[1];
    else
        l_a_begin->nb = av[2];
    l_a_end = l_a_begin;
    l_a_end->next = l_a_begin;
    if (init_list(l_a_begin, av, ac, status) == EXIT_FAILURE)
        return(84);
    sort(l_a_begin, l_a_begin, status);
    free(l_a_begin);
    return(0); 
}