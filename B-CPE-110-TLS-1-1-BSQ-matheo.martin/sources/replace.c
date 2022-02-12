/*
** EPITECH PROJECT, 2021
** replace.c
** File description:
** UWU
*/

int print_x2(int **dup, int y, int x, int *str)
{
    if (dup[y][x] > str[0]) {
        str[0] = dup[y][x];
        str[1] = x - str[0] + 1;
        str[2] = y - str[0] + 1;
    }
}

char **set_x(char **table, int *str)
{
    for (int y = str[2]; y < str[2] + str[0]; y++) {
        for (int x = str[1]; x < str[1] + str[0]; x++) {
            table[y][x] = 'x';
        }
    }
    return table;
}

char **print_x(int **dup, char **table, int height, int width)
{
    int str[3] = {0, 0, 0};

    for (int y = 0; y < height - 1; y++) {
        for (int x = 0; x < width; x++) {
            print_x2(dup, y, x, str);
        }
    }
    return set_x(table, str);
}
