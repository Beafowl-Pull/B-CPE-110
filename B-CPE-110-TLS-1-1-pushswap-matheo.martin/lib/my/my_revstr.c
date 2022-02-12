/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** UwU
*/

char *my_revstr(char *str)
{
    int len = 0;
    int i = 0;
    int j = 0;
    char temp = 0;
    int lengh = 0;

    for (len = 0; str[len] != '\0'; len++)
        lengh++;
    for (i = len; i > lengh / 2; i--) {
        temp = str[j];
        str[j] = str[len - 1];
        str[len - 1] = temp;
        j++;
        len--;
    }
    str[lengh] = '\0';
    return (str);
}
