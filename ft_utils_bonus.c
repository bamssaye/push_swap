/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 23:54:51 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/13 00:11:51 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s2)
	    return (-1);
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int ft_checkinput(t_pushswap *data, char *in)
{
    if (ft_strcmp("sa\n", in) == 0)
		ft_swap(data, 'a');
	else if (ft_strcmp("sb\n", in) == 0)
		ft_swap(data, 'b');
	else if (ft_strcmp("ss\n", in) == 0)
		ft_swap_all(data);
	else if (ft_strcmp("ra\n", in) == 0)
		ft_rotate(data, 'a');
	else if (ft_strcmp("rb\n", in) == 0)
		ft_rotate(data, 'b');
	else if (ft_strcmp("rr\n", in) == 0)
		ft_rotate_all(data);
	else if (ft_strcmp("rra\n", in) == 0)
		ft_reverse_rotate(data, 'a');
	else if (ft_strcmp("rrb\n", in) == 0)
		ft_reverse_rotate(data, 'b');
	else if (ft_strcmp("rrr\n", in) == 0)
		ft_reverse_rotate_all(data);
	else if (ft_strcmp("pa\n", in) == 0)
		ft_push_a(data);
	else if (ft_strcmp("pb\n", in) == 0)
		ft_push_b(data);
	else
		ft_error_all(data, 3);
	return (0);
}