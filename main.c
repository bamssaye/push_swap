/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:14:06 by bamssaye          #+#    #+#             */
/*   Updated: 2024/02/25 12:57:12 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "./libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct a_stack 
{
	int				stack;
	struct a_stack	*next;
} t_stack;


void addto_stack(t_stack **head, int value)
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

void freenode(t_stack *head)
{
	t_stack *tmp;
	
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free (tmp);
	}
}
int main()
{
	t_stack *a = NULL;
	 
	 
	addto_stack(&a, 5);
	addto_stack(&a, 9);
	addto_stack(&a, 10);
	printList(a);

	freenode(a);

}