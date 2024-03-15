/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_full.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 02:34:08 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/15 08:53:41 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap_bonus.h"

void	ft_swap_all(t_pushswap *data)
{
	ft_swap(data, 'a', 0);
	ft_swap(data, 'b', 0);
}

void	ft_rotate_all(t_pushswap *data)
{
	ft_rotate(data, 'a', 0);
	ft_rotate(data, 'b', 0);
}

void	ft_reverse_rotate_all(t_pushswap *data)
{
	ft_reverse_rotate(data, 'a', 0);
	ft_reverse_rotate(data, 'b', 0);
}

void	ft_print_op(int flag, int c)
{
	if (c == 1)
	{
		if (flag == 1)
			write(1, "ra\n", 3);
		else if (flag == 2)
			write(1, "rb\n", 3);
		else if (flag == 3)
			write(1, "rra\n", 4);
		else
			write(1, "rrb\n", 4);
	}
}
