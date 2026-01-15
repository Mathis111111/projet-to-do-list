/*
** EPITECH PROJECT, 2025
** cpooldayputchar
** File description:
** taskputchar
*/

#include "../../include/my.h"

#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
