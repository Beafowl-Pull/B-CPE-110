/*
** EPITECH PROJECT, 2021
** launcher.c
** File description:
** UWU
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/my.h"
#include "./test.h"

int launch(char *argv)
{
    char *str = upload_file(argv);
    int y = calc_lenght(str);
    int x = calc_width(str, y);
    char **map = char_to_tab(str, y, x);
    int **dup = create_dup(map, y, x);

    dup = set_dup(dup, y, x);
    map = print_x(dup, map, y, x);
    for (int i = 0; i < y - 1; i++) {
        write(1, map[i], x);
        my_putchar('\n');
        free(map[i]);
        free(dup[i]);
    }
    free(map[y - 1]);
    free(dup[y - 1]);
    free(map);
    free(str);
    free(dup);
    return 0;
}
