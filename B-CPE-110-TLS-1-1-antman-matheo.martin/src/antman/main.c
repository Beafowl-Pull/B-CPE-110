/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** main
*/

#include "lib.h"
#include "antman.h"

int main(int argc, char **argv)
{
    void (*funct[3])(char *file) = {lzw_compress, lzw_compress, compress};
    int index;

    if (check_h(argc, argv))
        return ant_h();
    if (check_file(argv[1]) || argc != 3)
        return 84;
    if ((index = index_function(argv[2][0])) == -1)
        return 84;
    (*funct[index])(argv[1]);
    return 0;
}
