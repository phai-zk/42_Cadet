CC			= gcc
SRCS		= ft_atoi.c ft_isascii.c ft_memcmp.c ft_putendl_fd.c ft_strdup.c ft_strlen.c ft_strtrim.c ft_bzero.c ft_isdigit.c\
ft_memcpy.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_substr.c ft_calloc.c ft_isprint.c ft_memmove.c ft_putstr_fd.c ft_strjoin.c\
ft_strncmp.c ft_tolower.c ft_isalnum.c ft_itoa.c ft_memset.c ft_split.c ft_strlcat.c ft_strnstr.c ft_toupper.c ft_isalpha.c ft_memchr.c\
ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c

SRCBONUSES	= ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c\
ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c $(SRCS)

OBJS		= $(SRCS:.c=.o)
OBJBONUSES	= $(SRCBONUSES:.c=.o)
NAME		= libft.a
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

bonus : $(OBJBONUSES)
	@$(LIB_CREATE) $(NAME) $(OBJBONUSES)
	@$(LIB_RAN) $(NAME)
	@echo "\nCreate bonus lib complete!"

all: $(NAME)

clean:
	@$(RM) $(OBJS) | $(RM) $(OBJBONUSES)
	@echo "Clean all object files"

fclean: clean
	@$(RM) $(NAME)
	@echo "Clean full!"

re: fclean all