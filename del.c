/*
** EPITECH PROJECT, 2025
** G-CPE-110 : Setting Up Shell
** File description:
** shell.h
*/

#include "libshell/shell.h"
#include "include/my.h"

void display_list_del_first(node_t *del)
{
    write(1, del->type, my_strlen(del->type));
    write(1, " n°", 4);
    my_putnbr(del->id);
    write(1, " - ", 3);
    my_putchar('"');
    write(1, del->name, my_strlen(del->name));
    my_putchar('"');
    write(1, " deleted.\n", 10);
}

void display_list_del(node_t *del)
{
    write(1, del->next->type, my_strlen(del->next->type));
    write(1, " n°", 4);
    my_putnbr(del->next->id);
    write(1, " - ", 3);
    my_putchar('"');
    write(1, del->next->name, my_strlen(del->next->name));
    my_putchar('"');
    write(1, " deleted.\n", 10);
}

int delete_func(int count, node_t *del, linked_list_t *list)
{
    node_t *tmp = malloc(sizeof(node_t));

    if (del->id == count) {
        display_list_del_first(del);
        list->header = del->next;
        del = del->next;
        return 0;
    }
    while (del->next != NULL) {
        if (del->next->id == count) {
            display_list_del(del);
            tmp = del->next;
            del->next = tmp->next;
            free(tmp);
            return 0;
        }
        del = del->next;
    }
    return 84;
}

int del(void *data, char **args)
{
    linked_list_t *list = data;
    node_t *del = list->header;
    int r = 0;
    int count = 0;

    if (list->header == NULL)
        return 84;
    for (int i = 0; args[i] != NULL; i++) {
        if (list->header == NULL)
            return 84;
        if (r == 84)
            break;
        count = my_getnbr(args[i]);
        r = delete_func(count, del, list);
        if (r == 84)
            return 84;
        del = list->header;
    }
    return r;
}
