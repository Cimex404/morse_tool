#		Compilation Rules
CC = cc
AR = ar rcs
CFLAGS = -Wall -Werror -Wextra -Iinclude
SRC = src/morse.c src/table.c
OBJ = $(SRC:.c=.o)
NAME = morse.a

#		Colors
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

#		Compilation
all: $(NAME)

$(NAME): $(OBJ)
		@$(AR) $(NAME) $(OBJ)
		@$(CC) $(CFLAGS) -o morse src/main.c morse.a
		@echo "\n$(GREEN)Compilation of morse is complete!$(RESET)"

%.o: %.c
		@$(CC) $(CFLAGS) -c $< -o $@
		@echo "Copiled: $(GREEN)$@$(RESET)"

clean:
		@rm -f $(OBJ)
		@echo "$(RED)Object files deleted!$(RESET)"

fclean: clean
		@rm -f $(NAME)
		@rm -f morse
		@echo "$(RED)$(NAME) deleted!$(RESET)"

re: fclean all

.PHONY: all re fclean clean