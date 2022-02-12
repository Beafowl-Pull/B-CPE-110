/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** itos_base
*/

#include <stdlib.h>

int my_strncat(char *, char *, int);

int my_revstr(char *);

char *itos_base(int n, int base)
{
    char buffer[1024];
    int count = 0;
    char *finale;
    int tmp;

    while (n != 0) {
        tmp = n % base;
        buffer[count] = (tmp >= 10) ? tmp + 87 : tmp + 48;
        n /= base;
        count++;
    }
    finale = malloc(count);
    my_strncat(finale, buffer, count);
    my_revstr(finale);
    return finale;
}

char *itos_base_u(long unsigned int n, int base)
{
    char buffer[1024];
    int count = 0;
    char *finale;
    long unsigned int tmp;

    while (n != 0) {
        tmp = n % base;
        buffer[count] = (tmp >= 10) ? tmp + 87 : tmp + 48;
        n /= base;
        count++;
    }
    finale = malloc(count);
    my_strncat(finale, buffer, count);
    my_revstr(finale);
    return finale;
}