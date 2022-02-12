/*
** EPITECH PROJECT, 2021
** read.c
** File description:
** UwU
*/

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char *write_bytes(const char *str, int x)
{
    char *buf = malloc(sizeof(char) * (x + 1));
    int find = open(str, O_RDONLY);
    int nbyte = 0;

    nbyte = read(find, buf, x);
    buf[nbyte] = '\0';
    close(find);
    return (buf);
}
