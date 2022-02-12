/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** main
*/

#include "lib.h"
#include "giantman.h"
#include <unistd.h>

int main(int argc, char **argv)
{
    void (*funct[3])(char *file) = {txt_function, txt_function, decompress_ppm};
    int index;

    if (check_h(argc, argv))
        return giant_h();
    if (check_file(argv[1]) || argc != 3)
        return 84;
    if ((index = index_function(argv[2][0])) == -1)
        return 84;
    (*funct[index])(argv[1]);
    return 0;
}