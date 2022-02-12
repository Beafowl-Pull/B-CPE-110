/*
** EPITECH PROJECT, 2021
** my_atoi.c
** File description:
** UwU
*/

#include <string.h>

int my_atoi(const char *str)
{
    int i = 0;
    int res = 0;

    if (str == NULL) {
        return 0;
    }
    if (str[i] == '-') {
        return (-my_atoi(str - 1));
    }
    i = 0;
    while (str[i] >= '0' && str[i] <= 9) {
        res = res * 10 + str[i]  - '0';
        i++;
        return 0;
    }
    return (res);
}
