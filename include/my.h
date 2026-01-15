/*
** EPITECH PROJECT, 2025
** my_printf
** File description:
** Header for setting_up
*/

#include <stdarg.h>

#ifndef MY_H_
    #define MY_H_
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>

typedef struct node_s {
    char *name;
    char *type;
    int id;
    struct node_s *next;
} node_t;
typedef struct linked_list_s {
    int id;
    struct node_s *header;
} linked_list_t;
int exec_sort_id(node_t *node, node_t *tmp, linked_list_t *list);
int sort_id(char **args, linked_list_t *list);
int my_strcmp(char *s, char *s2);
int error_handing_add_2(char **args);
void display_list_del_first(node_t *del);
int delete_func(int count, node_t *del, linked_list_t *list);
void display_list_disp(node_t *disp);
int error_handing_add(char **args);
void display_list_add(node_t *new);
int my_putchar(char c);
int my_putnbr(int nb);
int my_putstr(char *str);
char *my_strdup(char const *src);
int my_strlen(char *str);
int my_getnbr(char *str);
#endif /* !MY_H_ */
