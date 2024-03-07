/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:03:29 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/07 16:54:21 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_init(t_pushswap *data, char **av)
{
    int c_numbers;
    
    data = malloc(sizeof(t_pushswap));
    data->stack_a = NULL;
    data->stack_b = NULL;
    data->count_oper = 0;
    data->split = NULL;
    c_numbers = ft_count_a(data,av);
    data->stack_a_lenght = c_numbers;
    ft_checkdup(data);
}