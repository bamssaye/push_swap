/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 03:55:37 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/08 05:02:25 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void    ft_swap(t_pushswap *data, char flag)
{
    int i;
    int tmp;
    
    i = -1;
    if (flag == 'a')
    {
        tmp = data->stack_a[0];
        while (++i < data->stack_a_lenght - 1)
            data->stack_a[i] = data->stack_a[i + 1];
        data->stack_a_lenght--;
        i = data->stack_b_lenght;
        while (i > 0)
        {
            data->stack_b[i] = data->stack_b[i - 1];
            i--;
        }
        data->stack_b[0] = tmp;
        data->stack_b_lenght++;
    }
    else
    {
        tmp = data->stack_a[0];
        while (++i < data->stack_a_lenght - 1)
            data->stack_a[i] = data->stack_a[i + 1];
        data->stack_a_lenght--;
        i = data->stack_b_lenght;
        while (i > 0)
        {
            data->stack_b[i] = data->stack_b[i - 1];
            i--;
        }
        data->stack_b[0] = tmp;
        data->stack_b_lenght++;
    }
    
}

void    ft_push();
void    ft_rotate();
void    ft_reverse_rotate();