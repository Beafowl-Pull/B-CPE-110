/*
** EPITECH PROJECT, 2021
** my_put_long.c
** File description:
** UwU
*/

#include "../../include/my.h"

int my_put_long(long int a)
{
    if (a < 0) {
        my_putchar('-');
        my_put_nbr(a * (-1));
    }
    else if (a <= 9)
        my_putchar(a + 48);
    else {
        my_put_nbr(a / 10);
        a = (a % 10 + 48);
        my_putchar(a);
    }
    return (0);
}