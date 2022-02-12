/*
** EPITECH PROJECT, 2021
** my_strncmp
** File description:
** UwU
*/

int my_strlen3(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0, j = 0, time = 0;

    while (n <= time) {
        if (my_strlen3(s1) > my_strlen3(s2)) {
            return (my_strlen3(s1) - my_strlen3(s2));
            time++;
        }
        else if (my_strlen3(s1) < my_strlen3(s2)) {
            return (my_strlen3(s1) - my_strlen3(s2));
            time++;
        }
    }
    for (i; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] < s2[i]) {
            j = j - 1;
        }
        else if (s1[i] > s2[i])
            j = j + 1;
    }
    return (j);
}
