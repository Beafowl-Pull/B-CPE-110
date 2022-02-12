/*
** EPITECH PROJECT, 2021
** my_strlen.c
** File description:
** uwu
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}
