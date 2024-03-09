/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 03:55:37 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/09 05:51:21 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void    ft_push_a(t_pushswap *data)
{
    int i;
    int tmp;
    
    i = -1;
    if (data->stack_b_lenght == 0)
        return;
    tmp = data->stack_b[0];
    while (++i < data->stack_b_lenght)
        data->stack_b[i] = data->stack_b[i + 1];
    data->stack_b_lenght--;
    i = data->stack_a_lenght;
    while (i > 0)
    {
            data->stack_a[i] = data->stack_a[i - 1];
        i--;
    }
    data->stack_a[0] = tmp;
    data->stack_a_lenght++;
    write(1, "pa\n", 3);
}

void ft_push_b(t_pushswap *data)
{
    int i;
    int tmp;
    
    i = -1;
    tmp = data->stack_a[0];
    while (++i < data->stack_a_lenght)
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
    write(1, "pb\n", 3);
}

void    ft_swap(t_pushswap *data, int flag)
{
    int tmp;
    int i;

    i = 0;
    if (flag == 'a')
    {
        tmp = data->stack_a[i];
        data->stack_a[i] = data->stack_a[i + 1];
        data->stack_a[i + 1] = tmp;
        write(1, "sa\n", 3);
    }
    else
    {
        tmp = data->stack_b[i];
        data->stack_b[i] = data->stack_b[i + 1];
        data->stack_b[i + 1] = tmp;
        write(1, "sb\n", 3);
    }
}

void    ft_rotate(t_pushswap *data, int flag)
{
    int i;
    int tmp;

    i = -1;
    if (flag == 'a')
    {
        while (++i < data->stack_a_lenght - 1)
        {
            tmp = data->stack_a[i];
            data->stack_a[i] = data->stack_a[i + 1];
            data->stack_a[i + 1] = tmp;
        }
        write(1, "ra\n", 3);
    }
    else
    {
        while (++i < data->stack_b_lenght - 1)
        {
            tmp = data->stack_b[i];
            data->stack_b[i] = data->stack_b[i + 1];
            data->stack_b[i + 1] = tmp;
        }
        write(1, "rb\n", 3);
    }
}

void    ft_reverse_rotate(t_pushswap *data, int flag)
{
    int i;
    int tmp;
 
    if (flag == 'a')
    {
        i = data->stack_a_lenght;
        while (--i > 0)
        {
            tmp = data->stack_a[i];
            data->stack_a[i] = data->stack_a[i - 1];
            data->stack_a[i - 1] = tmp;
        }
        write(1, "rra\n", 4);
    }
    else
    {
        i = data->stack_b_lenght;
        while (--i > 0)
        {
            tmp = data->stack_b[i];
            data->stack_b[i] = data->stack_b[i - 1];
            data->stack_b[i - 1] = tmp;
        }
        write(1, "rrb\n", 4);
    }
}
