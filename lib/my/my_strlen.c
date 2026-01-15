/*
** EPITECH PROJECT, 2025
** cpoolday04
** File description:
** task03
*/

#include <stdio.h>
#include <unistd.h>
#include "../../include/my.h"

int my_strlen(char *str)
{
    int c = 0;

    while (str[c] != '\0') {
        c++;
    }
    return c;
}
