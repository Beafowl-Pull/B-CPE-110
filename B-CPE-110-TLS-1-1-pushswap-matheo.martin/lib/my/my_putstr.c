/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** uwu
*/

void my_putchar(char c);

int my_putstr(char *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return (1);
}
