/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 23:54:51 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/15 01:20:07 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap_bonus.h"

void ft_errorss(t_pushswap *data, int c)
{
    if (data->str)
        free(data->str);
    if (data->tmp)
        free(data->tmp);
    if(data->split)
        ft_freespac(data->split);
    free(data->stack_a);
    free(data->stack_b);
    free(data);
	if (c == 1)
		write(1, "Error\n", 6);
    exit(1);
}
static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s2)
	    return (-1);
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void ft_checkinput(t_pushswap *data, char *in)
{
    if (!ft_strcmp("sa\n", in))
		ft_swap(data, 'a', data->c);
	else if (!ft_strcmp("sb\n", in))
		ft_swap(data, 'b', data->c);
	else if (!ft_strcmp("ss\n", in))
		ft_swap_all(data);
	else if (!ft_strcmp("ra\n", in))
		ft_rotate(data, 'a', data->c);
	else if (!ft_strcmp("rb\n", in))
		ft_rotate(data, 'b', data->c);
	else if (!ft_strcmp("rr\n", in))
		ft_rotate_all(data);
	else if (!ft_strcmp("rra\n", in))
		ft_reverse_rotate(data, 'a', data->c);
	else if (!ft_strcmp("rrb\n", in))
		ft_reverse_rotate(data, 'b', data->c);
	else if (!ft_strcmp("rrr\n", in))
		ft_reverse_rotate_all(data);
	else if (!ft_strcmp("pa\n", in))
		ft_push_a(data, data->c);
	else if (!ft_strcmp("pb\n", in))
		ft_push_b(data, data->c);
	else
		ft_errorss(data, 1);
}
