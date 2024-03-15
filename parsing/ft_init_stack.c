/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:03:29 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/15 05:59:53 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int	ft_checksort(t_pushswap *data)
{
	int	i;

	i = 0;
	while (i < data->stack_a_lenght - 1)
	{
		if (data->stack_a[i] > data->stack_a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	ft_find_middle(t_pushswap *data, int flag)
{
	if (flag == 'a')
	{
		if (data->stack_a_lenght % 2 == 0)
			data->stack_a_middle = data->stack_a_lenght / 2;
		else
			data->stack_a_middle = (data->stack_a_lenght / 2) + 1;
	}
	else
	{
		if (data->stack_b_lenght % 2 == 0)
			data->stack_b_middle = data->stack_b_lenght / 2;
		else
			data->stack_b_middle = (data->stack_b_lenght / 2) + 1;
	}
}

void	ft_init(t_pushswap *data, char **av)
{
	int	count;

	data->str = NULL;
	data->tmp = NULL;
	data->line = NULL;
	data->count_oper = 0;
	data->stack_b_lenght = 0;
	data->first_len = 0;
	data->stack_po = 0;
	data->split = NULL;
	count = ft_count_a(data, av);
	data->stack_a_lenght = count;
	data->stack_a = malloc(sizeof(int) * count);
	data->stack_b = malloc(sizeof(int) * count);
	ft_checkdup(data);
}

void	ft_setup_init(t_pushswap *data)
{
	data->stack_a_min = ft_find_min(data, 'a');
	data->stack_a_max = ft_find_max(data, 'a');
	data->stack_a_index_min = ft_find_idex_min(data, 'a');
	data->stack_a_index_max = ft_find_idex_max(data, 'a');
	data->stack_b_min = ft_find_min(data, 'b');
	data->stack_b_max = ft_find_max(data, 'b');
	data->stack_b_index_min = ft_find_idex_min(data, 'b');
	data->stack_b_index_max = ft_find_idex_max(data, 'b');
	ft_find_middle(data, 'a');
	ft_find_middle(data, 'b');
}
