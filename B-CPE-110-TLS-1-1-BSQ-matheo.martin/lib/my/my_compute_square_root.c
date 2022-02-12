/*
** EPITECH PROJECT, 2021
** my_comput_square_root
** File description:
** UwU
*/

int my_compute_square_root(int nb)
{
    int i = 1;
    int i_res = 0;
    while (i_res < nb) {
        i_res = i * i;
        if (i_res == nb) {
            return (i);
        } else if (i > 46340) {
            return (0);
        } else {
            i = i + 1;
        }
    }
    return (0);
}
