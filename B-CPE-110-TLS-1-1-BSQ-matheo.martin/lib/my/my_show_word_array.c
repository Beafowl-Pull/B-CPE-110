/*
** EPITECH PROJECT, 2021
** my_show_word_array
** File description:
** UwU
*/

int my_str_isalpha(char *str);

int my_putstr(char *str);

void my_putchar(char c);

void my_show_word_array(char * const *tab)
{
    int i = 0;
    while (tab[i] != 0) {
        if (my_str_isalpha(tab[i]) && tab[i] != "\0") {
            my_putstr(tab[i]);
            my_putchar('\n');
            i++;
        }
    }
}
