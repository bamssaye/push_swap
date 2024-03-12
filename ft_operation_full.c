/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_full.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 02:34:08 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/12 02:38:49 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_remove_2(t_pushswap *data)
{
    int i;
    
    i = -1;
    while (++i < data->stack_a_lenght)
    {
        data->stack_po[i][0] =  data->stack_po[i + 1][0];
        data->stack_po[i][1] = data->stack_po[i + 1][1];
    }
        
}
void ft_rotatr_2(t_pushswap *data)
{
    int tmp[2][2];
    int i;
    
    i = -1;
    while (++i < data->stack_a_lenght - 1)
    {
        tmp[0][0] = data->stack_po[i][0];
        tmp[0][1] = data->stack_po[i][1];
        data->stack_po[i][0] =  data->stack_po[i + 1][0];
        data->stack_po[i][1] = data->stack_po[i + 1][1];
        data->stack_po[i + 1][0] = tmp[0][0];
        data->stack_po[i + 1][1] = tmp[0][1];
    }
}
void    ft_swap_all(t_pushswap *data)
{
    ft_swap(data, 'a');
    ft_swap(data, 'b');
    write(1, "ss\n", 3);
}

void    ft_rotate_all(t_pushswap *data)
{
    ft_rotate(data, 'a');
    ft_rotate(data, 'b');
    write(1, "rr\n", 3);
}

void    ft_reverse_rotate_all(t_pushswap *data)
{
    ft_reverse_rotate(data, 'a');
    ft_reverse_rotate(data, 'b');
    write(1, "rrr\n", 4);
}
