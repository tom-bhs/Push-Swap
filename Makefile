NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = src
OBJ_DIR = obj

SRCS = $(SRC_DIR)/main.c $(SRC_DIR)/push.c $(SRC_DIR)/swap.c $(SRC_DIR)/rotate.c $(SRC_DIR)/reverse_rotate.c
OBJS = $(SRCS:.c=.o)

# Compilation principale
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

# Règle pour compiler chaque fichier .c en fichier .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoie les fichiers objets
clean:
	rm -f $(OBJ_DIR)/*.o

# Nettoie les fichiers objets et l'exécutable
fclean: clean
	rm -f $(NAME)

# Recompilation complète
re: fclean all

# Empêche Make d'agir sur des fichiers de même nom
.PHONY: all clean fclean re
