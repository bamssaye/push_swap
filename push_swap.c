/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 05:14:06 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/15 01:12:34 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/push_swap.h"

int	main(int ac, char **av)
{
	t_pushswap	*data;

	if (ac > 1)
	{
		data = malloc(sizeof(t_pushswap));
		data->c = 1;
		ft_init(data, av);
		ft_smallsort(data);
		ft_bigsort(data);
		ft_error_all(data, 3);
	}
}
