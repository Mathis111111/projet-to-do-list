/*
** EPITECH PROJECT, 2025
** G-CPE-110 : Setting Up Shell
** File description:
** shell.h
*/

#include "libshell/shell.h"
#include "include/my.h"

void display_list_add(node_t *new)
{
    write(1, new->type, my_strlen(new->type));
    write(1, " n°", 4);
    my_putnbr(new->id);
    write(1, " - ", 3);
    my_putchar('"');
    write(1, new->name, my_strlen(new->name));
    my_putchar('"');
    write(1, " added.\n", 8);
}

int add(void *data, char **args)
{
    linked_list_t *list = data;
    node_t *new = malloc(sizeof(node_t));
    int r = 0;

    r = error_handing_add(args);
    if (r != 84) {
        for (int i = 0; args[i] != NULL; i += 2) {
            new = malloc(sizeof(node_t));
            new->type = my_strdup(args[i]);
            new->name = my_strdup(args[i + 1]);
            new->id = list->id;
            display_list_add(new);
            new->next = list->header;
            list->header = new;
            list->id++;
        }
    }
    return r;
}

int error_handing_add(char **args)
{
    int count = 0;

    while (args[count] != NULL)
        count++;
    while (count > 1)
        count -= 2;
    if (count != 0)
        return 84;
    return 0;
}
