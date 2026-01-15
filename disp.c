/*
** EPITECH PROJECT, 2025
** G-CPE-110 : Setting Up Shell
** File description:
** shell.h
*/

#include "libshell/shell.h"
#include "include/my.h"

void display_list_disp(node_t *disp)
{
    write(1, disp->type, my_strlen(disp->type));
    write(1, " n°", 4);
    my_putnbr(disp->id);
    write(1, " - ", 3);
    my_putchar('"');
    write(1, disp->name, my_strlen(disp->name));
    my_putchar('"');
    my_putchar('\n');
}

int disp(void *data, char **args)
{
    linked_list_t *list = data;
    node_t *disp = malloc(sizeof(node_t));
    int count = 0;

    while (args[count] != NULL)
        count++;
    if (count == 0) {
        if (list->header == NULL)
            return 0;
        disp = list->header;
        while (disp != NULL) {
            display_list_disp(disp);
            disp = disp->next;
        }
    } else
        return 84;
    return 0;
}
