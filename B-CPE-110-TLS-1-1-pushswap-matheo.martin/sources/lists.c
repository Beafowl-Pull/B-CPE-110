/*
** EPITECH PROJECT, 2021
** lists.c
** File description:
** UwU
*/

#include "../include/pushswap.h"

int print_list(t_node *start_list, int first_elem)
{
    t_node *tmp;

    if (first_elem == false)
        my_printf("\n");
    tmp = start_list;
    my_printf("%s ", tmp->nb);
    tmp = tmp->next;
    while (tmp != start_list) {
        my_printf("%s ", tmp->nb);
        tmp = tmp->next;
    }
    return (0);
}

int give_in_list(t_node *list, char *nb)
{
    t_node *start_list;

    start_list = list;
    while (list->next != start_list)
        list = list->next;
    if ((list->next = malloc(sizeof(t_node))) == NULL)
        return (EXIT_FAILURE);
    list = list->next;
    list->nb = nb;
    list->next = start_list;
    return (0);
}