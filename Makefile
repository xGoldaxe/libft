SRCS	= ft_isupper.c

HEADERS	= 

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

LIBC 	= ar rc

%.o:		%.c
			${CC} ${CFLAGS} -o $@ $^

${NAME}:	${OBJS}
			${LIBC} $@ ${HEADERS} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
