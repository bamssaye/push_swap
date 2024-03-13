/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort_other_utils.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 23:32:10 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/12 23:39:04 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rrotate_2(t_pushswap *data)
{
    int tmp[2][2];
    int i;
    
    i = data->stack_a_lenght;
    while (--i > 0)
    {
        tmp[0][0] = data->stack_po[i][0];
        tmp[0][1] = data->stack_po[i][1];
        data->stack_po[i][0] =  data->stack_po[i - 1][0];
        data->stack_po[i][1] = data->stack_po[i - 1][1];
        data->stack_po[i - 1][0] = tmp[0][0];
        data->stack_po[i - 1][1] = tmp[0][1];
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
 
int ft_findindex(t_pushswap *data, int op)
{
    int i;

    i = 0;
    while (i < data->first_len)
    {
        if (data->stack_po[0][0] <= i)
            return (i);
        else if (data->stack_po[0][0] <= i + op)
            return (i);
        i++;
    }
    return (i);
}

void pushall_to_stack_a(t_pushswap *data)
{
    int     tmp;
    int     tmp1;
    
    while (1)
    {
        ft_setup_init(data);
        if (data->stack_b_index_max == 0){
           ft_push_a(data);
        }
        else
        {
            tmp = (data->stack_b_lenght - data->stack_b_index_max) + 1;
            tmp1 = data->stack_b_index_max + 1;
            if (data->stack_b_index_max > data->stack_b_middle)
                while (--tmp)
                    ft_reverse_rotate(data, 'b');
            else
                while (--tmp1)
                    ft_rotate(data, 'b');
        }
        if (data->stack_b_lenght == 0)
            break;
    }  
}