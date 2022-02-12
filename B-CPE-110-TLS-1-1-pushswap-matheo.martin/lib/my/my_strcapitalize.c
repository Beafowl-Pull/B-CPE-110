/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** UwU
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 90 && str[i] >= 65) {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}

char *my_strcapitalize(char *str)
{
    int i = 0;

    my_strlowcase(str);
    if (str[i - 1] == 32) {
        str[i] = 32;
    }
    str[i] = '\0';
    return (str);
}
