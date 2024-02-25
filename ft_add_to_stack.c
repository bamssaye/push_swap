/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:52:04 by bamssaye          #+#    #+#             */
/*   Updated: 2024/02/25 14:57:19 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

void ft_freenode(t_stack *head)
{
	t_stack *tmp;
	
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free (tmp);
	}
}

void ft_add_to_stack(t_stack **head, int value)
{
	t_stack *node;

	node = malloc(sizeof(t_stack));
	
	node->stack = value;
	node->next = *head;
	*head    = node;
}

void printList(t_stack *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->stack);
     node = node->next;
  }
}


void ft_addtostack(char **str)
{
    t_stack *stack;
    int i;

    i = 0;
    stack = NULL;
    while (str[i])
    {
        ft_add_to_stack(&stack, ft_atoi(str[i++]));
    }
    ft_freeargs(str);
    printList(stack);
    ft_freenode(stack);
    
}