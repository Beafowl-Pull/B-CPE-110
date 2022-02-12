/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** UwU
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "../../include/my.h"

char case_other(va_list list, char *str, int count)
{
    switch (str[count]) {
        case 'S':
            no_printable(va_arg(list, char *));
            break;
    }
}

char case_one(va_list list, char *str, int count)
{
    switch (str[count]) {
        case 'x':
            my_put_nbr_base(va_arg(list, int), "0123456789abcdef");
            break;
        case 'X':
            my_put_nbr_base(va_arg(list, int), "0123456789ABCDEF");
            break;
        case 'b':
            my_put_nbr_base(va_arg(list, int), "01");
            break;
        case 'o':
            my_put_nbr_base(va_arg(list, int), "01234567");
            break;
        case 'p':
            my_putstr("0x");
            my_put_nbr_base(va_arg(list, long int), "0123456789abcdef");
            break;
    }
}

char case_two(va_list list, char *str, int count)
{
    switch (str[count]) {
        case 's':
            my_putstr(va_arg(list, char *));
            break;
        case 'c':
            my_putchar(va_arg(list, int));
            break;
        case 'i':
        case 'd':
            my_put_nbr(va_arg(list, int));
            break;
        case 'u':
            my_put_unsigned(va_arg(list, unsigned int), "0123456789");
            break;
        case '%':
            my_putchar('%');
            break;
    }
}

int my_printf(char *str, ...)
{
    va_list list;

    va_start(list, str);
    for (int count = 0; str[count]; count++) {
        if (str[count] == '%') {
            count++;
            case_two(list, str, count);
            case_one(list, str, count);
            case_other(list, str, count);
        } else
            my_putchar(str[count]);
    }
    va_end(list);
    return (0);
}