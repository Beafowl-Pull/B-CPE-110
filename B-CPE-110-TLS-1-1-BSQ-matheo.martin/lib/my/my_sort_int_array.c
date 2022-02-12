/*
** EPITECH PROJECT, 2021
** my_sort_int_array.c
** File description:
** UWU
*/

int my_swap(int *a, int *b);

void my_sort_int_array(int *str, int a, int b)
{
    if (str[b] > str[b+1])
        my_swap(&str[b], &str[b+1]);
}

void my_sort_int_array2(int *str, int a)
{
    for (int i = 0; i < a; i++) {
        for (int b = 0; b < a-i-1; b++)
            my_sort_int_array(str, a, b);
    }
}
