:x
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elemarch <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 14:22:58 by elemarch          #+#    #+#              #
#    Updated: 2015/03/09 16:41:15 by elemarch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft
SRC =	ft_bzero.c			ft_memccpy.c		ft_memchr.c\
		ft_memcmp.c			ft_memcpy.c			ft_memset.c\
		ft_strdup.c			ft_strlen.c			ft_putchar.c\
		ft_putstr.c			ft_strcpy.c			ft_strcat.c\
		ft_atoi.c			ft_isalnum.c		ft_isalpha.c\
		ft_isascii.c		ft_isdigit.c		ft_memalloc.c\
		ft_isprint.c		ft_strchr.c			ft_strncpy.c\
		ft_strnstr.c		ft_strrchr.c		ft_strstr.c\
		ft_tolower.c		ft_toupper.c		ft_putstrn.c\
		ft_putstrs.c		ft_putnbr.c			ft_putstrc.c\
		ft_strcmp.c			ft_memmove.c		ft_strncmp.c\
		ft_strncat.c		ft_strlcat.c		ft_memdel.c\
		ft_strnew.c			ft_strclr.c			ft_striter.c\
		ft_striteri.c		ft_strequ.c			ft_strnequ.c\
		ft_strsub.c			ft_strjoin.c		ft_strtrim.c\
		ft_strsplit.c		ft_itoa.c			ft_putendl.c\
		ft_putchar_fd.c		ft_putstr_fd.c		ft_putendl_fd.c\
		ft_putnbr_fd.c		ft_strmap.c			ft_strmapi.c\
		ft_lstnew.c			ft_lstadd.c			ft_lstdelone.c\
		ft_lstdel.c			ft_lstiter.c		ft_lstmap.c\
		ft_strdel.c			
SRCD = ./
OBJ = $(SRC:.c=.o)
SRCF = $(addprefix $(SRCD), $(SRC))

all: $(NAME)

$(NAME):
	@echo "\033[1;33mStarting compilation..."
	@gcc -Wall -Werror -Wextra -g -c $(SRCF)
	@echo "\033[0;31mCreating library..."
	@ar rc lib$(NAME).a $(OBJ)
	@echo "\033[0;31mGenerating index..."
	@ranlib lib$(NAME).a

clean:
	@echo "\033[1;33mRemoving objects files..."
	@rm -rf $(OBJ)

fclean: clean
	@echo "\033[1;33mRemoving .a file..."
	@rm -rf lib$(NAME).a

re: fclean all
