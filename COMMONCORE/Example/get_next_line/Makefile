NAME			= get_next_line.a

SOURCES 		= get_next_line.c get_next_line_utils.c

HEADERS 		= .

OBJECTS			= $(SOURCES:.c=.o)

CC				= cc

FLAGS			= -Wall -Werror -Wextra

AR				= ar -rsc

RM				= rm -f

all:			$(NAME)

$(NAME):		$(OBJECTS)
				$(AR) $(NAME) $(OBJECTS)

%.o:%.c
				$(CC) -I $(HEADERS) $< -o $@ -c $(FLAGS)

clean:
				$(RM) $(OBJECTS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re