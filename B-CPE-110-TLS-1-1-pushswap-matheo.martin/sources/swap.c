/*
** EPITECH PROJECT, 2021
** swap.c
** File description:
** UwU
*/

#include "../include/pushswap.h"

int swap(t_node *list, char *print, int *scan_one, int status)
{
    char *tmp;

    tmp = list->nb;
    list->nb = (list->next)->nb;
    if (*scan_one == false && status == false)
        my_printf(" ");
    else if (*scan_one == false && status == true)
        my_printf("\n");
    else
        *scan_one = false;
    my_printf("%s", print);
    if (status == true)
        print_list(list, false);
    return (false);
}