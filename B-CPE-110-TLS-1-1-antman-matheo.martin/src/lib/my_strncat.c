/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** my_strncat
*/

int my_strncat_len(char *str)
{
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }
    return count;
}

char *my_strncat(char *dest, const char *src, int n)
{
    int len = my_strncat_len(dest);
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[len + i] = src[i];
    }
    dest[len + i] = '\0';
    return dest;
}
