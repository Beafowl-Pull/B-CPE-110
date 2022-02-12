/*
** EPITECH PROJECT, 2021
** my_int_to_hexadecimal.c
** File description:
** UWU
*/

#include "../../include/my.h"
#include <stdlib.h>

int power_counter(int long a)
{
    int i = 0;

    while (a > my_compute_power_rec(16, i) &&
    a < my_compute_power_rec(16, i + 1)) {
        i = i + 1;
    }
    return (i);
}

char *int_to_hexadecimal(int long a)
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
