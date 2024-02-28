/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:52:04 by bamssaye          #+#    #+#             */
/*   Updated: 2024/02/28 19:41:59 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void ft_add_to_stack(t_stack **head, int value)
{
	t_stack *new;
  t_stack *last;
  
  last = *head;
	new = malloc(sizeof(t_stack));
	new->stack = value;
	new->next = NULL;
  if (*head == NULL)
  {
    *head = new;
    return;
  }
  while (last->next != NULL)
        last = last->next;
  last->next = new;
}

static int ft_strlen_pro(t_pushswap *data)
{
  int i;

  i = 0;
  while (data->split[i] != NULL)
    i++;
  return (i);
}
void printList(t_stack *node, t_pushswap *data)
{
  while (node != NULL)
  {
     printf(" %d ", node->stack);
     node = node->next;
  }
  (void)data;
 // printf("total --> %d", data->length);
}

int ft_addto_stack_a(t_pushswap *data)
{
  int i;

  i = 0;
  (data->length) = ft_strlen_pro(data);
  while (data->split[i] != NULL){
    ft_add_to_stack(&data->a, ft_atoi(data->split[i++]));
  }
  
  printList(data->a, data);
  
  //printList(data->a);
  return (1);
}
