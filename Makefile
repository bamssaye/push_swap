# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 16:29:29 by bamssaye          #+#    #+#              #
#    Updated: 2024/02/28 17:14:59 by bamssaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
FUN = ft_parsing.c utlis/ft_error.c\
	utlis/libft_utlis.c utlis/ft_split.c\
	utlis/ft_add_to_stack.c\

AR = ar -rc
RM = rm -f
OBG = $(FUN:.c=.o)
FSA = -fsanitize=address
	
all : $(NAME)

$(NAME) : $(OBG)
	$(AR) $(NAME) $(OBG)
	$(CC) $(CFLAGS) push_swap.c $(NAME) $(FSA) -o push_swap

clean :
	$(RM) $(OBG)
fclean :
	$(RM) $(OBG) $(NAME) push_swap
re : 
 
