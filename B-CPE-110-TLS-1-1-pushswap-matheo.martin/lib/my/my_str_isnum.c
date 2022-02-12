/*
** EPITECH PROJECT, 2021
** my_str_isnum.c
** File description:
** UWU
*/

int my_str_isnum(const char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}
