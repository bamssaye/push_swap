/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 23:44:10 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/15 08:32:38 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/push_swap_bonus.h"

int	main(int ac, char **av)
{
	t_pushswap	*data;

	if (ac > 1)
	{
		data = malloc(sizeof(t_pushswap));
		data->c = 0;
		ft_init(data, av);
		data->line = get_next_line(0);
		while (data->line)
		{
			ft_checkinput(data, data->line);
			free(data->line);
			data->line = get_next_line(0);
		}
		free(data->line);
		if (!ft_checksort(data) && !data->stack_b_lenght)
			write(1, "OK\n", 3);
		else
			write(1, "KO\n", 3);
		ft_errorss(data, 0);
	}
	return (0);
}
