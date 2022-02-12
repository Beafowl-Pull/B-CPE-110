/*
** EPITECH PROJECT, 2021
** sizeof.c
** File description:
** UwU
*/

#include "../include/my.h"

int calc_nbr_len(int i)
{
    int j = 0;

    if (i != 0)
        for (j; j > 0; j++)
            i /= 10;
    else
        j = 1;
    return j;
}

int calc_lenght (char *str)
{
    int lenght = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '\n')
            lenght++;
    return lenght;
}

int calc_width(char *str, int lenght)
{
    int width = 0;
    int j = 0;

    while (str[j] != '\n')
        j++;
    j++;
    for (; str[j] != '\n'; j++)
        width++;
    return (width);
}
