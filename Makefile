# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 16:29:29 by bamssaye          #+#    #+#              #
#    Updated: 2024/03/08 01:24:13 by bamssaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
FUN = ft_check_input.c ft_checkdup.c\
	ft_free_all.c ft_init_stack.c\
	ft_split.c ft_stack_value.c\
	libft_utlis.c
AR = ar -rc
RM = rm -f
OBJS_DIR = obj
OBG =  ${FUN:%.c=%.o}
FSA = -fsanitize=address
	
all : $(NAME)

$(NAME) : $(OBG)
	$(AR) $(NAME) $(OBG)
	$(CC) main.c $(NAME) $(FSA) -o push_swap

clean :
	$(RM) $(OBG) $(NAME)
fclean :
	$(RM) $(OBG) $(NAME) push_swap
re : 
 
