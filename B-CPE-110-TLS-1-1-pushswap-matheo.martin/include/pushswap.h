/*
** EPITECH PROJECT, 2021
** pushswap.h
** File description:
** pushswap
*/

#include <stdbool.h>
#include <stdlib.h>
#include "my.h"

#ifndef PUSHSWAP_H_
#define PUSHSWAP_H_

typedef struct s_node
{
    char *nb;
    struct s_node *next;    
} t_node;

int is_sorted(t_node *list);
int is_supp(char *nba, char *nbb, int is_neg);
static int init_list(t_node *start_list, char **av, int ac, int status);
int print_list(t_node *start_list, int first_elem);
int give_in_list(t_node *list, char *nb);
t_node *rotate_left(t_node *start_list, char *print, int *scan_one, int status);
t_node *rotate_right(t_node *start_list, char *print, int *scan_one, int status);
static void sort(t_node *l_a, t_node *temp_a, int status);
int swap(t_node *list, char *print, int *scan_one, int status);

#endif
