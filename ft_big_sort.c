/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 02:54:10 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/12 03:38:59 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bigsort(t_pushswap *data)
{
    int i;
    int j;
    
    i = -1;
    data->first_len = data->stack_a_lenght;
    j = (15 / 400) * data->first_len + (15 - 15 / 4);
    while (++i < data->first_len)
        data->tmp[i] = data->stack_a[i];
    ft_sort_list(data);
    ft_setup_po(data);
    if (data->stack_a_lenght < 400)
        ft_algo(data, j);
    else
        ft_algo(data, j);
}
