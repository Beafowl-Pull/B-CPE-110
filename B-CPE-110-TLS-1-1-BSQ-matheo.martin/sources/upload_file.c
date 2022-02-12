/*
** EPITECH PROJECT, 2021
** max_line.c
** File description:
** UwU
*/

#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include "./test.h"
#include <stdio.h>

char *upload_file(char const *str)
{
    struct stat *buf;
    char *buffer = NULL;

    buf = malloc(sizeof(struct stat));
    stat(str, buf);
    if (buf->st_size == 0) {
        exit(84);
    }
    buffer = write_bytes(str, buf->st_size);
    free(buf);
    return buffer;
}
