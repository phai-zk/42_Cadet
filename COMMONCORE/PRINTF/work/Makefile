CC			= gcc
SRCS		= ft_printf.c \
src/ft_putchar.c  src/ft_putnbr.c  src/ft_putstr.c src/ft_itoa.c \
src/ft_puthex.c src/ft_putptr.c src/ft_strdup.c

OBJS		= $(SRCS:.c=.o)
NAME		= libftprintf.a
LIB_CREATE	= ar rc
LIB_RAN		= ranlib
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

.c.o:
	@echo "Compile: $<."
	@$(CC) $(CFLAGS) -c $< -o $@ -I .

$(NAME): $(OBJS)
	@$(LIB_CREATE) $(NAME) $(OBJS)
	@$(LIB_RAN) $(NAME)
	@echo "\nCreate lib complete!"

all: $(NAME)

clean:
	@$(RM) $(OBJS)
	@echo "Clean all object files"

fclean: clean
	@$(RM) $(NAME)
	@echo "Clean full!"

re: fclean all