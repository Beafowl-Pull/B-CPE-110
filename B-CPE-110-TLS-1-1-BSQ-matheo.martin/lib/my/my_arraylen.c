/*
** EPITECH PROJECT, 2021
** my_arraylen
** File description:
** UwU
*/

int my_arraylen(char **arr)
{
    int i = 0;

    for (; arr[i]; i++);
    return (i);
}
