/*
** EPITECH PROJECT, 2021
** my_sort_word_array
** File description:
** UwU
*/

int my_arraylen(char **arr);

int my_strcmp(char const *s1, char const *s2);

int my_sort_word_array(char **tab)
{
    char *temp;
    int i = 0;

    for (int i = 0; i < my_arraylen(tab) - 1; i++) {
        if (my_strcmp(tab[i], tab[i + 1]) < 0) {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = -1;
        }
    }
    return (0);
}
