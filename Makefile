SRCS	=  ft_isalpha.c ft_islower.c ft_memchr.c  ft_memmove.c ft_strlcpy.c \
ft_bzero.c   ft_isascii.c ft_isprint.c ft_memcmp.c  ft_memset.c  ft_strlen.c \
ft_isalnum.c ft_isdigit.c ft_isupper.c ft_memcpy.c  ft_strlcat.c ft_strnlen.c

HEADERS	= libft.h 

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc

LIBC	= ar -rc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror


%.o:		%.c	
				${CC} -I. -o $@ -c $? ${CFLAGS}

${NAME}:	${OBJS}
				${LIBC} ${NAME} ${OBJS}

all:		${NAME}

clean:
				${RM} ${OBJS}

fclean:		clean
				${RM} ${NAME}

re:				fclean all

.PHONY:		all clean fclean re
