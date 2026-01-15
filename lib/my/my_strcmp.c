/*
** EPITECH PROJECT, 2025
** cpoolday06
** File description:
** task01
*/

#include <stdio.h>
#include <unistd.h>

int my_strcmp(char *s, char *s2)
{
    int i = 0;

    if (s[i] != s2[i])
        return 84;
    while (s[i] == s2[i] && (s[i] != '\0' || s2[i] != '\0')) {
        i++;
        if (s[i] != s2[i])
            return 84;
    }
    return 0;
}
