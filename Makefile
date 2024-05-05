NAME = push_swap

CC = gcc 
CFLAGS = -Wall -Wextra -Werror

SRCS =	src/main.c \
		src/push.c \
		src/swap.c \
		src/rotate.c \
		src/reverse_rotate.c \
		#src/utils.c \

OBJS = $(patsubst src/%,obj/%,$(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

obj/%.o: src/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re