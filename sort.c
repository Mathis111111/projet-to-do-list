/*
** EPITECH PROJECT, 2025
** G-CPE-110 : Setting Up Shell
** File description:
** shell.h
*/

#include "libshell/shell.h"
#include "include/my.h"

int sort(void *data, char **args)
{
    linked_list_t *list = data;

    if (args[0] != NULL)
        write(1, args[0], my_strlen(args[0]));
    if (list->header != NULL)
        my_putnbr(list->id);
    return 0;
}
