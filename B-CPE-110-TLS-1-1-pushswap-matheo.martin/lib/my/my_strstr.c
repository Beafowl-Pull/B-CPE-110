/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** UwU
*/

char *my_strstr (char *str, char *to_find);

char *sub (char *str, char *to_find, int i)
{
    while (to_find[i] != '\0') {
        if (to_find[i] != str[i])
            return (my_strstr(str + 1, to_find));
        i = i + 1;
        }
}

char *my_strstr (char *str, char *to_find)
{
    int i;

    if (str[0] != '\0') {
        i = 0;
        sub(str, to_find, i);
        return (str);
    }
    else
        return (0);
}