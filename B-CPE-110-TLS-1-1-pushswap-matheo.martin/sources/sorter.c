/*
** EPITECH PROJECT, 2021
** sort.c
** File description:
** UwU
*/

#include "../include/pushswap.h"

int is_sorted(t_node *list)
{
    t_node *tmp;
    
    tmp = list;
    if (is_supp(tmp->nb, (tmp->next)->nb, false) == true)
        return(false);
    tmp = tmp->next;
    while (tmp->next != list) {
            if (is_supp(tmp->nb, (tmp->next)->nb, false) == true)
                return (false);
            tmp = tmp->next;
    }
    return (true);
}

static int marvin (int status, t_node *temp_a)
{
    if (status == true && temp_a->nb)
        return (print_list(temp_a, true));
}

static void marvin2(t_node *temp_a, int scan_one, int status)
{
    if (is_supp(temp_a->nb, (temp_a->next)->nb, false) == true)
        swap(temp_a, "sa", &scan_one, status);
    temp_a = rotate_left(temp_a, "ra", &scan_one, status);
}

static void sort(t_node *l_a, t_node *temp_a, int status)
{
    int scan_one = true;

    while (is_sorted(l_a) == false) {
        temp_a = l_a;
        if (temp_a->next == temp_a)
            marvin(status, temp_a);
        if (is_supp(temp_a->nb, (temp_a->next)->nb, false) == true)
            swap(temp_a, "sa", &scan_one, status);
        temp_a = rotate_left(temp_a, "ra", &scan_one, status);
        while (temp_a->next != l_a && is_sorted(l_a) == false)
            marvin2(temp_a, scan_one, status);
    }
    while (scan_one == false && is_sorted(temp_a) == false)
        temp_a = rotate_right(temp_a, "rra", &scan_one, status);
    if (scan_one == false)
        my_printf("\n");
}
