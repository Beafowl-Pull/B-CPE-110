/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_putstr
*/

#include <unistd.h>

int my_strlen(char const *str);

void my_putstr(char const *str)
{
    int size = my_strlen(str);

    write(1, str, size);
}
