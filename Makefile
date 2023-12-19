NAME = push_swap

SOURCES	= tools.c \
		tools_one.c \
		instructions.c \
		instructions_one.c \
		instructions_two.c \
		parsing.c \
		push_swap.c \
		big_nums.c \
		sortin.c \
		ft_memmove.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isdigit.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_split.c \
		ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c

OBJECTS = $(SOURCES:%.c=%.o)

INCLUDES = push_swap.h libft.h

FLAGS = -Werror -Wextra -Wall

all: $(NAME)

%.o	: %.c $(INCLUDES)
	cc $(FLAGS) -c $<

$(NAME) : $(OBJECTS) push_swap.h
	@cc -o $(NAME) ${OBJECTS}

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re