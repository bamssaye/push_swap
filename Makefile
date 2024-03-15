# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 16:29:29 by bamssaye          #+#    #+#              #
#    Updated: 2024/03/15 06:57:24 by bamssaye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_BONUS = checker


CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rc
RM = rm -rf
FSA = 
SRC_DIRS = parsing utils sorting_algo operation

UTILS = parsing/ft_check_input.c parsing/ft_checkdup.c\
	utils/ft_free_all.c parsing/ft_init_stack.c\
	utils/ft_split.c parsing/ft_stack_value.c\
	utils/libft_utlis.c sorting_algo/ft_small_sort.c\
	operation/ft_operation.c sorting_algo/ft_big_sort.c\
	sorting_algo/ft_big_sort_utils.c operation/ft_operation_full.c\
	sorting_algo/ft_big_sort_other_utils.c\
	push_swap.c

UTILS_B = checker.c utils/get_next_line.c\
	utils/ft_utils_bonus.c utils/libft_utlis.c\
	utils/ft_free_all.c parsing/ft_init_stack.c\
	utils/ft_split.c parsing/ft_stack_value.c\
	operation/ft_operation_full.c parsing/ft_check_input.c\
	operation/ft_operation.c parsing/ft_checkdup.c
	

OBJDIR = obj

OBG =  $(addprefix $(OBJDIR)/,  $(notdir $(UTILS:.c=.o)))
OBJ_B = $(addprefix $(OBJDIR)/, $(notdir $(UTILS_B:%.c=%.o)))


$(OBJDIR)/%.o:%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
$(OBJDIR)/%.o:parsing/%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
$(OBJDIR)/%.o:utils/%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
$(OBJDIR)/%.o:sorting_algo/%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@
$(OBJDIR)/%.o:operation/%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : $(OBG)
	@$(CC) $(FSA) $(OBG) -o $(NAME)
	@echo "Make Mandatory"

bonus : $(NAME_BONUS)

$(NAME_BONUS) :  $(OBJ_B)
	@$(CC)  $(OBJ_B) $(FSA) -o $(NAME_BONUS)
	@echo "Make Bonus"

clean :
	@$(RM) $(OBJDIR)
	@echo "Clean Object"
	
fclean : clean
	@$(RM) $(OBG) $(NAME) $(NAME_BONUS) 
	@echo "Clean All"
	
re : fclean all
 
.SECONDARY : $(OBG) $(OBJ_B)
