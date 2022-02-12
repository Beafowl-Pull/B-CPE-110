/*
** EPITECH PROJECT, 2021
** my_find_prime_sup
** File description:
** UwU
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int i = nb + 1;
    while (!my_is_prime(i))
        i++;
    return (i);
}
