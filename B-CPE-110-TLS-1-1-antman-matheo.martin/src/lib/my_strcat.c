/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_strcat
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int max = my_strlen(dest) + my_strlen(src);
    char *result = malloc(max + 1);
    int i = 0;
    int j = 0;

    for (j; dest[j] != '\0'; j++)
        result[j] = dest[j];
    for (i; src[i] != '\0'; i++)
        result[j + i] = src[i];
    result[j + i] = '\0';
    return result;
}