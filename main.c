/*
** EPITECH PROJECT, 2025
** G-CPE-110 : Setting Up Shell
** File description:
** shell.h
*/

#include "libshell/shell.h"
#include "include/my.h"

int main(int argc, char **argv)
{
    int r = 0;
    linked_list_t *list = malloc(sizeof(linked_list_t));

    list->id = 0;
    list->header = NULL;
    if (argc > 1)
        r = 84;
    if (argv[0][0] == '$')
        r = 84;
    if (r != 84)
        r = workshop_shell(list);
    return r;
}
