NAME	= libftprintf.a

SRC	= ft_printf.c ft_print_cs%.c ft_print_diu.c ft_print_pxX.c

OBJ	= ${SRC:.c=.o}

CC		= cc

FLAGS	= -Wall -Werror -Wextra

all:		${NAME}

%.o: %.c
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJ}
			ar rcs ${NAME} ${OBJ}

clean:
			rm -f ${OBJ}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
