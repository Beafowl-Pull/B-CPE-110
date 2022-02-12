/*
** EPITECH PROJECT, 2021
** test
** File description:
** UwU
*/

#ifndef TEST_H_
#define TEST_H_

char **char_to_tab(char const *str, int nb_a, int nb_b);
int str_check(char **str, int i, int j);
int **create_dup(char **map, int nb_y, int nb_x);
int launch(char *argv);
int my_entry(char a, char *str);
char *write_bytes(const char *str, int x);
int min_int(int **dup, int x, int y);
int **set_dup(int **dup, int height, int width);
char **set_x(char **table, int *str);
char **print_x(int **dup, char **table, int height, int width);
int calc_nbr_len(int i);
int calc_lenght (char *str);
int calc_width(char *str, int lenght);
char *upload_file(char const *filepath);

#endif
