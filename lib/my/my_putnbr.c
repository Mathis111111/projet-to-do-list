/*
** EPITECH PROJECT, 2025
** cpooldayputchar
** File description:
** taskputchar
*/

#include "../../include/my.h"

static void print_positive(long number)
{
    if (number >= 10)
        print_positive(number / 10);
    my_putchar((int)(number % 10) + '0');
}

int my_putnbr(int nb)
{
    long number = nb;

    if (number < 0) {
        my_putchar('-');
        number = -number;
    }
    if (number == 0) {
        my_putchar('0');
        return 0;
    }
    print_positive(number);
    return nb;
}
