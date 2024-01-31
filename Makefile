NAME	=	Push_swap
CC		=	gcc
FLAGS	=	-O3 -g3 -L -lft
CFLAGS	=	-Wextra -Wall -Werror -g -I./inc

SRCS	=	Push_swap.c
LIBFT 	=	./libft

RM = rm -f

OBJS	:= ${SRCS:.c=.o}

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@ && printf "Compiling: $(notdir $<)"

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -L$(LIBFT) -lft -o $(NAME)

clean:
	make clean -C $(LIBFT)
	$(RM) $(OBJS)

fclean: clean
	make fclean -C $(LIBFT)
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean, fclean, re