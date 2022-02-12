/*
** EPITECH PROJECT, 2021
** cp_entry.c
** File description:
** UwU
*/

#include <stdlib.h>

int str_check(char **str, int i, int j)
{
    if (i == 0 || j == 0)
        if (str[i][j] == '.')
            return (1);
    if (str[i][j] == 'o')
        return (0);
    return (-1);
}

int **create_dup(char **map, int nb_y, int nb_x)
{
    int **dup = malloc(sizeof(int *) * nb_y);

    for (int i = 0; i < nb_y; i++)
        dup[i] = malloc(sizeof(int) * nb_x + 1);
    for (int y = 0; y < nb_y; y++) {
        for (int x = 0; x < nb_x; x++) {
            dup[y][x] = str_check(map, y, x);
        }
    }
    return dup;
}
