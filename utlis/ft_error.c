/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:12:14 by bamssaye          #+#    #+#             */
/*   Updated: 2024/02/28 17:08:30 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ft_error(t_pushswap *data)
{
    free(data->str);
    ft_free_split(data->split);
    free(data);
}

void	ft_free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
        free (str[i++]);
    free(str);
}

void ft_smallerror(void)
{
    write(1,"Error\n", 6);
}