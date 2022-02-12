/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i != n; i++)
        dest[i] = src[i];
    dest[n] = '\0';
    return dest;
}
