/*
** EPITECH PROJECT, 2021
** char_to_tab.c
** File description:
** UwU
*/

#include <stdlib.h>

void char_to_tab3(char const *str, char **table, int y, int x)
{
    for (int z = 1; str[z] != '\0'; z++) {
        if (str[z] == '\n') {
            y++;
            x = 0;
        } else {
            if (y != 0)
                table[y - 1][x] = str[z];
            x++;
        }
    }
}

int char_to_tab2 (const char *str, int z, char **table)
{
    int y = 0;
    int x = 0;

    if (str[z] == '\n') {
        y++;
        x = 0;
    } else {
        if (y != 0)
            table[y - 1][x] = str[z];
        x++;
    }
}

char **char_to_tab(char const *str, int nb_a, int nb_b)
{
    char **table = NULL;
    int y = 0;
    int x = 0;

    table = malloc(sizeof(char *) * nb_a);
    for (int i = 0; i < nb_a; i++) {
        table[i] = malloc(sizeof(char) * (nb_b + 1));
        for (int j = 0; j < nb_b + 1; j++)
            table[i][j] = '\0';
    }
    char_to_tab3(str, table, y, x);
    return table;
}
