# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Project name
NAME = libftprintf.a

# Libft paths
LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

PRINTF_DIR = ./srcs

# Source files for ft_printf
SRC = ft_printf.c ft_printchar.c ft_printstring.c ft_printpointer.c ft_printnumber.c ft_printunsignednumber.c ft_printhexadecimal.c\
	  ft_printpercent.c

# Object files for ft_printf
OBJ = $(SRC:.c=.o)

# Clean command
RM = rm -f

# Rules
all: $(NAME)


$(NAME): $(LIBFT) $(OBJ)
	cp $(LIBFT) $(NAME)
	$(CC) $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	$(RM) $(OBJ)
	$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFT_DIR)  

re: fclean all

.PHONY: all clean fclean re
