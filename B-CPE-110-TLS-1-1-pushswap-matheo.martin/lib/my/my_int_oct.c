/*
** EPITECH PROJECT, 2021
** my_int_oct.c
** File description:
** UwU
*/

#include "../../include/my.h"
#include <stdlib.h>

int octer_counter(int a)
{
    int b = 0;

    while (a > my_compute_power_rec(8, b) &&
    a < my_compute_power_rec(8, b + 1)) {
        b++;
    }
    return (0);
}

char *int_to_octer(int long a)
{
    int long b = 0;
    int long c = power_counter(a);
    int long temp_a = a;
    int long temp;
    char *res = malloc(sizeof(char) * c + 1);

    while (temp_a != 0) {
        temp = temp_a % 8;
        if (temp_a < 10)
            temp = temp + 48;
        res[b] = temp;
        temp_a = temp_a / 8;
        a++;
    }
    my_revstr(res);
    res[b] = '\0';
    return (res);
}
