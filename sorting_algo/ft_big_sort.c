/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 02:54:10 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/15 01:19:41 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	ft_bigsort(t_pushswap *data)
{
    int i;
    
    i = -1;
    data->first_len = data->stack_a_lenght;
    while (++i < data->first_len)
        data->tmp[i] = data->stack_a[i];
    ft_sort_list(data);
    ft_setup_po(data);
    if (data->stack_a_lenght < 400)
        ft_algo(data, 15);
    else
        ft_algo(data, 30);
}
