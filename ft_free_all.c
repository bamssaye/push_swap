/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:34:22 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/07 16:48:13 by bamssaye         ###   ########.fr       */
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

void ft_error_all(t_pushswap *data)
{
    free(data->str);
    ft_freespac(data->split);
    free(data);
    write(1, "Error\n", 6);
    exit(1);
}
