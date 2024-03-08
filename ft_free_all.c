/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:34:22 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/08 01:20:50 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freespac(char **str)
{
	int	i;

	i = 0;
    if (str == NULL)
        return;
    while (str[i])
        free(str[i++]);
    free(str);
}

void ft_error_all(t_pushswap *data, int c)
{
    if (data->str)
        free(data->str);
    if (data->tmp)
        free(data->tmp);
    if(data->split)
        ft_freespac(data->split);
    free(data);
    if (c == 1)
        write(1, "Error\n", 6);
    exit(1);
}
