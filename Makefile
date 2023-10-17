NAME = libftprintf.a
GCC = gcc
CFLAGS = -Wall -Wextra -Werror
OBJ_DIR	=./obj/
SRCS = \
OBJ_FILES = $(SRCS:.c=.o)
OBJS	= $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)

$(OBJ_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(@D)
	@$(GCC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re