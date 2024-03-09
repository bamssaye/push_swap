# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 16:29:29 by bamssaye          #+#    #+#              #
#    Updated: 2024/03/09 04:48:52 by bamssaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
FUN = ft_check_input.c ft_checkdup.c\
	ft_free_all.c ft_init_stack.c\
	ft_split.c ft_stack_value.c\
	libft_utlis.c ft_small_sort.c\
	ft_operation.c main.c
AR = ar -rc
RM = rm -rf
OBJDIR = obj
OBG =  $(addprefix $(OBJDIR)/, $(FUN:%.c=%.o))
FSA = -g3 -ggdb


all : $(NAME)

$(OBJDIR)/%.o:%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
$(NAME) : $(OBG)
	@$(CC) $(FSA) $(OBG) -o $(NAME)
	@echo "make done"
clean :
	@$(RM) $(OBJDIR)
	@echo "clean object"
fclean :
	@$(RM) $(OBG) $(NAME)
	@echo "clean all"
re : fclean all
 
