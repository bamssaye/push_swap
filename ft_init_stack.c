/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:03:29 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/08 04:03:56 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void ft_init(t_pushswap *data, char **av)
{
    int count;
    
    data->str = NULL;
    data->tmp = NULL;
    data->count_oper = 0;
    data->stack_b_lenght = 0;
    data->split = NULL;
    count = ft_count_a(data,av);
    data->stack_a_lenght = count;
    data->stack_a = malloc(sizeof(int) * count);
    data->stack_b = malloc(sizeof(int) * count);
    ft_checkdup(data);
    ft_smallsort(data, count);
}

void ft_setup_init(t_pushswap *data)
{
	data->stack_a_min = ft_find_min(data, 'a');
	data->stack_a_max = ft_find_max(data, 'a');
	data->stack_a_index_min = ft_find_idex_min(data, 'a');
	data->stack_a_index_max = ft_find_idex_max(data, 'a');
	data->stack_b_min = ft_find_min(data, 'b');
	data->stack_b_max = ft_find_max(data, 'b');
	data->stack_b_index_min = ft_find_idex_min(data, 'b');
	data->stack_b_index_max = ft_find_idex_max(data, 'b');
}