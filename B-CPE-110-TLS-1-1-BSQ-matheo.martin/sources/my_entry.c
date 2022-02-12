/*
** EPITECH PROJECT, 2021
** my_entry.c
** File description:
** UwU
*/

int my_entry(char a, char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == a)
            return 1;
    return 0;
}
