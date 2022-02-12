/*
** EPITECH PROJECT, 2021
** my_put_unsigned.c
** File description:
** UwU
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_put_unsigned(unsigned int a, char const *str)
{
    int len_str = my_strlen(str);
    int ret = 0;
    char *result = malloc(sizeof(char) * (len_str + 2));

    if (result == NULL)
        return (NULL);
    if (a == 0) {
        return (0);
    } else {
        for (int i = 0; a != 0; i++) {
            result[i] = str[a % len_str];
            a = a / len_str;
        }
        result = my_revstr(result);
        my_putstr(result);
    }
    free(result);
    return (0);
}