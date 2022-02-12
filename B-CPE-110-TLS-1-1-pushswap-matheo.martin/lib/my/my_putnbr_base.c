/*
** EPITECH PROJECT, 2021
** my_putnbr_base.c
** File description:
** UwU
*/

int my_strlen(char const *str);

void my_putchar(char c);

int my_put_nbr_base(int nb, char *base)
{
    int result;
    int rest;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    result = nb / my_strlen(base);
    rest = nb % my_strlen(base);
    if (result > 0)
        my_put_nbr_base(result, base);
    my_putchar(base[rest]);
    return (0);
}
