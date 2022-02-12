/*
** EPITECH PROJECT, 2021
** my_showstr
** File description:
** UwU
*/

int my_str_isprintable(const char *str);

void my_putchar(char c);

int my_putnbr_base(int nbr, char *base);

int sub (char *str, int i)
{
    if (my_str_isprintable(str)) {
        my_putchar(str[i]);
    } else {
        my_putchar('\\');
        if (str[i] < 16)
            my_putchar('0');
        my_putnbr_base(str[i], "0123456789abcdef");
    }
}

void my_showstr(char *str)
{
    int i;

    i = 0;
    while (str[i]) {
        sub (str, i);
        i = i + 1;
    }
}
