/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 01:42:38 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/15 08:58:40 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	ft_sort_three(t_pushswap *data)
{
	if (data->stack_a[data->stack_a_lenght - 1] == ft_find_max(data, 'a')
		&& ft_checksort(data))
		ft_swap(data, 'a', data->c);
	else if (data->stack_a[data->stack_a_lenght - 1] == ft_find_min(data, 'a')
		&& data->stack_a[0] == ft_find_max(data, 'a'))
	{
		ft_rotate(data, 'a', data->c);
		ft_swap(data, 'a', data->c);
	}
	else if (data->stack_a[0] == ft_find_max(data, 'a')
		&& data->stack_a[1] == ft_find_min(data, 'a'))
		ft_rotate(data, 'a', data->c);
	else if (data->stack_a[1] == ft_find_max(data, 'a')
		&& data->stack_a[0] == ft_find_min(data, 'a'))
	{
		ft_swap(data, 'a', data->c);
		ft_rotate(data, 'a', data->c);
	}
	else if (data->stack_a[1] == ft_find_max(data, 'a')
		&& data->stack_a[data->stack_a_lenght - 1] == ft_find_min(data, 'a'))
		ft_reverse_rotate(data, 'a', data->c);
}

void	ft_sort_five(t_pushswap *data, int count)
{
	int	i;
	int	in;

	while (count > 3)
	{
		ft_setup_init(data);
		i = (data->stack_a_lenght - data->stack_a_index_min) + 1;
		in = data->stack_a_index_min + 1;
		if (data->stack_a_index_min >= data->stack_a_middle)
			while (--i)
				ft_reverse_rotate(data, 'a', data->c);
		else
			while (--in)
				ft_rotate(data, 'a', data->c);
		ft_push_b(data, data->c);
		count--;
	}
	ft_sort_three(data);
	i = data->stack_b_lenght + 1;
	while (--i)
		ft_push_a(data, data->c);
}

void	ft_smallsort(t_pushswap *data)
{
	if (data->c == 1)
	{
		if (!ft_checksort(data))
			ft_error_all(data, 3);
		if (data->stack_a_lenght <= 5)
		{
			if (data->stack_a_lenght == 2)
				ft_swap(data, 'a', data->c);
			else if (data->stack_a_lenght == 3)
				ft_sort_three(data);
			else
				ft_sort_five(data, data->stack_a_lenght);
			ft_error_all(data, 3);
		}
	}
}
