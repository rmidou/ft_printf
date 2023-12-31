NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = src/ft_printf.c \
		src/fct1.c \
		src/hexa.c \

OBJ = $(SRC:.c=.o)

all : $(NAME)

src/%.o : src/%.c
	$(CC) $(CFLAGS) -I include -c $< -o $@

$(NAME) : $(OBJ)
	cp lib/libft.a $(NAME)
	ar rcs $(NAME) $(OBJDIR)$(OBJ)

clean :
	rm -rf $(OBJDIR)$(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all