/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** UwU
*/

#ifndef __MY_H__
# define __MY_H__

char *concat_params(int a, char *b);
int my_compute_power_rec(int a, int b);
void extrem_min(void);
int count(const char *a);
int my_strlen2(char const *a);
int my_strlen3(char const *a);
char **my_str_to_word_array(char const *a);
int my_compute_square_root(int *);
int my_find_prime_sup(int *);
int my_getnbr (char const *a);
int my_compute_factorial_rec(int *);
int my_putchar (char a);
int my_isneg (int a);
int my_put_nbr (int a);
int my_putstr (char const *a);
char *my_revstr(char *a);
void my_showmem(char *a, int b);
void my_showstr(char *a);
void my_sort_int_array(int a, int b);
int my_str_isalpha(char *a);
int my_str_islower(const char *a);
int my_str_isnum(const char *a);
int my_str_isprintable(const char *a);
char *my_strcapitalize(char *a);
int my_strcmp(char const *a, char const *b);
char *my_strcpy(char *a, char const *b);
int my_strlen (char const *a);
char *my_strlowcase(char *a);
int my_strncmp(char const *a, char const *b, int c);
char *my_strncpy(char *a, char const *b, int c);
char *my_strstr(char *a, char *b);
char *my_strupcase(char *a);
int my_swap (int a, int b);
char *my_strdup(char const *a);
char *concat_params(int a, char *b);
void my_show_word_array(char const *a);
int octer_counter(int a);
char *int_to_octer(int long a);
int my_put_long(long int a);
char *my_put_unsigned(unsigned int nb, char const *base);
int power_counter(int long a);
char *int_to_hexadecimal(int long a);
int switch_case_one(char *str, int a, long b);
int my_printf(char *str, ...);
char *long_to_hexadecimal(int long a);
char into_else(char *result, char const *base, int len_base, int nb);
char *my_put_nbr_base(int nb, char const *base);
int  no_printable(char *str);
void convert(int number);

#endif
