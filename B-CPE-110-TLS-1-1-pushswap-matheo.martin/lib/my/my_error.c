/*
** EPITECH PROJECT, 2021
** my_error
** File description:
** UWU
*/

#include <unistd.h>

void my_printerror (char c)
{
    write (2, &c, 1);
}

int my_error(char *str)
{
    while (*str != '\0') {
        my_printerror(*str);
        str++;
    }
    return (1);
}