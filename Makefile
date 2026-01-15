CC = clang
CFLAGS = -Wall -Wextra -Werror
LIB = -L./libshell -lshell
NAME = organized
SRC = \
	main.c \
	lib/my/my_putchar.c \
	lib/my/my_putnbr.c \
	lib/my/my_strdup.c \
	lib/my/my_putstr.c \
	lib/my/my_strlen.c \
	lib/my/my_getnbr.c \
	lib/my/my_strcmp.c \
	add.c \
	del.c \
	sort.c \
	disp.c
OBJ	= $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
