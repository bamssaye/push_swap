/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:34:22 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/10 06:18:29 by bamssaye         ###   ########.fr       */
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
void    ft_sfree_po(int **stack_po)
{
    int i;

    i = 0;
    while (i <  6)
        free(stack_po[i++]);
    free(stack_po);
    stack_po = NULL;
}
void ft_error_all(t_pushswap *data, int c)
{
    if (data->str)
        free(data->str);
    if (data->tmp)
        free(data->tmp);
    if(data->split)
        ft_freespac(data->split);
    if ((c % 3) == 0)
    {
        free(data->stack_a);
        free(data->stack_b);
    }
    free(data);
    if ((c % 2) == 0)
        write(1, "Error\n", 6);
    exit(1);
}
