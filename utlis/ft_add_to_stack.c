/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:52:04 by bamssaye          #+#    #+#             */
/*   Updated: 2024/02/29 13:01:20 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void ft_add_to_stack(t_stack **head, int value, int index)
{
	t_stack *new_node;
  t_stack *lst;
  
  lst = *head;
	new_node = malloc(sizeof(t_stack));
	new_node->stack = value;
  new_node->index = index;
	new_node->next = NULL;
  if(*head == NULL)
    *head = new_node;
  else
  {
    while (lst->next != NULL)
		  lst = lst->next;
    lst->next = new_node;
  }
}

static int ft_strlen_pro(t_pushswap *data)
{
  int i;

  i = 0;
  while (data->split[i] != NULL)
    i++;
  return (i);
}
void printList(t_stack *node)
{
  while (node != NULL)
  {
     printf(" line : %d : ", node->index);
     printf("%d \n", node->stack);
     node = node->next;
  }
}
static int ft_checksort(t_pushswap *data)
{
  t_stack *tmp;
  
  tmp = data->a;
  while (tmp->next != NULL)
  {
    if (tmp->stack < tmp->next->stack)
      tmp = tmp->next;
    else
      return (0);
  }
  return (1);
}
static void ft_swap(t_pushswap *data, char c)
{
  int tmp;
  
  if (data->stacklenght == 2 && !ft_checksort(data))
  {
    if (c == 'a')
    {
      tmp = data->a->stack;
      data->a->stack = data->a->next->stack;
      data->a->next->stack = tmp;
      printf("sa\n");
    }
    else if (c == 'b')
    {
      tmp = data->b->stack;
      data->b->stack = data->b->next->stack;
      data->b->next->stack = tmp;
      printf("sb\n"); 
    }
  }
  
}
int ft_addto_stack_a(t_pushswap *data)
{
  int i;
  
  i = -1;
  (data->stacklenght) = ft_strlen_pro(data);
  while (data->split[++i] != NULL){
    ft_add_to_stack(&data->a, ft_atoi(data->split[i]), i);
  }
  // if (ft_checksort(data))
  //   return (1);
  ft_swap(data, 'a');
  printList(data->a);
  return (1);
}
