/*
** EPITECH PROJECT, 2021
** main_bsq.c
** File description:
** UwU
*/

#include "../include/my.h"

int launch(char *argv);

int main(int argc, char **argv)
{
    if (argc != 2) {
        return 84;
    }
    return launch(argv[1]);
}
