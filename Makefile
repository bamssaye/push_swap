# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 16:29:29 by bamssaye          #+#    #+#              #
#    Updated: 2024/03/06 01:59:45 by bamssaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
FUN = 

AR = ar -rc
RM = rm -f
OBJS_DIR = obj
OBG =  $(addprefix $(OBJS_DIR)/, ${FUN:%.c=%.o})
FSA = -fsanitize=address
	
all : $(NAME)

$(NAME) : $(OBG)
	$(AR) $(NAME) $(OBG)
	$(CC) $(CFLAGS) main.c $(NAME) $(FSA) -o push_swap

clean :
	$(RM) $(OBG)
fclean :
	$(RM) $(OBG) $(NAME) push_swap
re : 
 
