/*
** EPITECH PROJECT, 2021
** comp.c
** File description:
** UwU
*/

#include <stdbool.h>
#include "../include/pushswap.h"

int is_supp(char *nba, char *nbb, int is_neg)
{
    if (nba[0] != '+' && nbb[0] == '+')
        return (is_supp(nba, nbb + 1, false));
    else if (nba[0] == '+' && nbb[0] != '+')
        return (is_supp(nba + 1, nbb, false));
    else if (nba[0] == '+' && nbb[0] == '+')
        return (is_supp(nba + 1, nbb + 1, false));
    else if (nba[0] != '-' && nbb[0] == '-')
        return (true);
    else if (nba[0] == '-' && nbb[0] != '-')
        return (false);
    else if (nba[0] == '-' && nbb[0] == '-')
        return (!is_supp(nba + 1, nbb + 1, true));
    else if (my_strlen(nba) > my_strlen(nbb))
        return (true);
    else if (my_strlen(nba) == my_strlen(nbb) &&
    (my_strcmp(nba, nbb)) > 0 && is_neg == false)
        return (true);
    else if (my_strlen(nba) == my_strlen(nbb) &&
    (my_strcmp(nba, nbb)) >= 0 && is_neg == true)
        return (true);
    return (false);
}

