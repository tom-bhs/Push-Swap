NAME = push_swap

CC = gcc 
CFLAGS = -Wall -Wextra -Werror

SRCS =	src/main.c \
		src/push.c \
		src/swap.c \
		src/rotate.c \
		src/reverse_rotate.c \
		#src/utils.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c src/main.c -o main.o

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re