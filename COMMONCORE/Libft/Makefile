CC			= gcc
SRCS		= $(wildcard *.c)
OBJS		= ${SRCS:.c=.o}
NAME		= libft.a
LIB_CREATE	= ar rc
LIB_RAN		= cc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I .

${NAME}: ${OBJS}
	${LIB_CREATE} ${NAME} ${OBJS}
	${LIB_RAN} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all