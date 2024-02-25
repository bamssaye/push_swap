/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:01:30 by bamssaye          #+#    #+#             */
/*   Updated: 2024/02/25 13:11:00 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "./libft/libft.h"

typedef struct a_stack 
{
	int				stack;
	struct a_stack	*next;
} t_stack;

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
static char	**ft_freespace(char **str)
{
	int	i;

	i = 0;
    while (str[i])
        i++;
    int j = 0;
	while (j < i)
		free(str[j++]);
	free(str);
	return (NULL);
}

void ft_addtostack(char **str)
{
    t_stack *stack;
    int i;

    i = 0;
    stack = NULL;
    while (str[i])
    {
        addto_stack(&stack, ft_atoi(str[i++]));
    }
    ft_freespace(str);
    printList(stack);
    freenode(stack);
    
}
int ft_checkduplicat(char **str)
{
    int i;
    int j;
    int len;
    
    i = 0;
    while (str[i])
    {
        j = i + 1;
        while (str[j])
        {
            if (ft_strlen(str[i]) < ft_strlen(str[j]))
                len = ft_strlen(str[j]);
            else
                len = ft_strlen(str[i]);
            if (!ft_strncmp(str[i], str[j], len))
                return (ft_freespace(str), 0);
            j++;
        }
        i++;
    }
    ft_addtostack(str);
    return (1);
}

int ft_checkstring(char *str)
{
    char **split;
    int i;
    
    i = 0;
    while (str[i])
    {
        if (ft_isdigit(str[i]) || str[i] == ' ' || str[i] == '+' || str[i] == '-')
            i++;
        else
            return (0);        
    }
    i = 0;
    split = ft_split(str,' ');
    while (split[i])
    {
        if(!ft_isdigit(split[i][0]) && !ft_isdigit(split[i][1])) 
            return 0;
        i++;
    }
    if (!ft_checkduplicat(split))
        return (0);
    return (1);
}
int ft_checkarg(char **string)
{
  
    int i;
    char *all_stack;
    
    i = 1;
    if (string[i + 1] != NULL)
    {
        all_stack = ft_strdup(string[i++]);
        all_stack = ft_strjoin(all_stack, " ");
    }
    else
        all_stack = ft_strdup(string[i++]);
    while (string[i])
    {
        all_stack = ft_strjoin(all_stack, string[i]);
        if (string[i + 1] != NULL)
            all_stack = ft_strjoin(all_stack, " ");
        i++;
    }
    if (!ft_checkstring(all_stack))
        return (0);
    return (1);
}

int main(int ac, char **av)
{
    int i = 0;
    if (ac > 1)
    {
        if (!ft_checkarg(av))
            return (printf("Error"), 0);
        // while (av[1][i])
        //     write(1,&av[1][i++],1);
    }
}
//"665 565 6565 6565 656"