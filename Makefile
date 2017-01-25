NAME = push_swap
SRC =	main.c 			check.c			op.c			pile.c\
		pile_sort.c		sort.c			init.c			misc.c
SRCD = src/
HDR = push_swap.h
HDRD = ./
OBJ = $(SRC:.c=.o)
SRCF = ${addprefix $(SRCD), $(SRC)}
HDRF = ${addprefix $(HDRD), $(HDR)}
LIB = ft
LIBD = libs/

all: prog

prog: $(NAME) clean

$(NAME):
	@echo "\033[1;34mCompiling libraries...\033[0m"
	@echo "\t\033[34mLibft\033[0m"
	@make $(LIBD)lib$(LIB)
	@echo "\033[1;34mCopying files\033[0m"
	@echo "\t\033[34mlibft.h\033[0m"
	@cp $(LIBD)libft/libft.h ./libft.h
	@echo "\t\033[34mLibft.a\033[0m"
	@cp $(LIBD)libft/libft.a ./libft.a
	@echo "\033[1;34mCreating objects files...\033[0m"
	@gcc -Wall -Werror -Wextra -c $(SRCF)
	@echo "\033[1;34mCreating executable...\033[0m"
	@gcc libft.a $(OBJ) -o $(NAME)
	@echo "Executable name: \033[33m$(NAME)\033[0m"

clean:
	@echo "\033[31mRemoving \033[1mobjects files\033[0;31m...\033[0m"
	@rm -f $(OBJ)

fclean: clean
	@echo "\033[31mRemoving \033[1mexecutable file\033[0;31m...\033[0m"
	@rm -f $(NAME)

re: fclean all