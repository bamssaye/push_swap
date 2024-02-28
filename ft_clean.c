/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 23:39:37 by bamssaye          #+#    #+#             */
/*   Updated: 2024/02/28 17:08:09 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_freenode(t_stack *head )
{
	t_stack *tmp;
	
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free (tmp);
	}
}

void	ft_freeargs(char **str)
{
	int	i;

	i = 0;
    while (str[i])
        i++;
    int j = 0;
	while (j < i)
		free(str[j++]);
	free(str);
    str = NULL;
	//return (NULL);
}

void ft_cleanerro(void)
{
    ft_putstr_fd("Error", 1);
    exit(1);
}