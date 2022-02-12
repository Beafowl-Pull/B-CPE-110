/*
** EPITECH PROJECT, 2021
** my_long_to_haxadeciaml.c
** File description:
** UwU
*/

#include <stdlib.h>
#include "../../include/my.h"

char *long_to_hexadecimal(int long a)
{
    int long b = 0;
    int long c = power_counter(a);
    int long temp_a = a;
    int long temp;
    char *res = malloc(sizeof(char) * c + 1);

    while (temp_a != 0) {
        temp = temp_a % 16;
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        res[b] = temp;
        temp_a = temp_a / 16;
        b++;
    }
    my_revstr(res);
    res[b] = '\0';
    return (res);
}
