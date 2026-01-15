/*
** EPITECH PROJECT, 2025
** cpooldayputchar
** File description:
** taskputchar
*/

#include <stddef.h>
#include "../../include/my.h"

int my_putstr(char *str)
{
    int count = 0;

    if (str == NULL)
        return my_putstr("(null)");
    while (str[count] != '\0') {
        my_putchar(str[count]);
        count++;
    }
    return count;
}
