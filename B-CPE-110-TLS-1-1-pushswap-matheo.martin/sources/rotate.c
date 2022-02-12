/*
** EPITECH PROJECT, 2021
** rotate.c
** File description:
** UwU
*/

#include "../include/pushswap.h"

t_node *rotate_left(t_node *start_list, char *print, int *scan_one, int status)
{
    if (*scan_one == false && status == false)
        my_printf(" ");
    else if (*scan_one == false && status == true)
        my_printf("\n");
    else
        *scan_one = false;
    my_printf("%s", print);
    if (status == true)
        print_list(start_list->next, false);
    return (start_list->next);
}

t_node *rotate_right(t_node *start_list, char *print, int *scan_one, int status)
{
    t_node *tmp;

    tmp = start_list;
    while (tmp->next != start_list)
        tmp = tmp->next;
    if (*scan_one == false && status == false)
        my_printf(" ");
    else if (*scan_one == false && status == true)
        my_printf("\n");
    else
        *scan_one = false;
    my_printf("%s", print);
    if (status == true)
        print_list(tmp, false);
    return (tmp);
}