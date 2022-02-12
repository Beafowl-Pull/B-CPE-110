/*
** EPITECH PROJECT, 2021
** replace_all.c
** File description:
** UwU
*/

#include "../include/my.h"
#include "./test.h"

int set_dup2 (int **dup, int y, int x)
{
    if (dup[y][x] == -1)
        dup[y][x] = min_int(dup, x, y);
}

int min_int(int **dup, int x, int y)
{
    int int_value[3] = {dup[y - 1][x], dup[y][x - 1], dup[y - 1][x - 1]};

    my_sort_int_array2(int_value, 3);
    return int_value[0] + 1;
}

int **set_dup(int **dup, int height, int width)
{
    for (int y = 1; y < height - 1; y++) {
        for (int x = 1; x < width; x++) {
            set_dup2(dup, y, x);
        }
    }
    return dup;
}
