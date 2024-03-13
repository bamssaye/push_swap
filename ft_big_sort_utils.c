/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 02:31:50 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/12 23:39:55 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_list(t_pushswap *data)
{
    int i;
    int j;
    int tmp;
    
    i = 0;
    while (i < data->stack_a_lenght)
    {
        j = i + 1;
        while (j < data->stack_a_lenght)
        {
            if (data->tmp[i] > data->tmp[j])
            {
                tmp = data->tmp[i];
                data->tmp[i] = data->tmp[j];
                data->tmp[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

int ft_finarry(t_pushswap *data, int value)
{
    int i;
    
    i = 0;
    while (i < data->stack_a_lenght)
    {
        if (data->tmp[i] == value)
            return (i);
        i++;
    }
    return (0);
}

void ft_setup_po(t_pushswap *data)
{
    int i;
    int count;

    i = 0;
    count = data->stack_a_lenght;
    data->stack_po = malloc(sizeof(int*) * count);
    while (i < count)
        data->stack_po[i++] = malloc(sizeof(int) * 3);
    i = 0;
    while (i < count)
    {
            data->stack_po[i][0] = ft_finarry(data, data->stack_a[i]);
            data->stack_po[i][1] = data->stack_a[i];
        i++; 
    }
}

static void ft_norminette(t_pushswap *data, int op)
{
    if(ft_findindex(data, op) > data->first_len / 2)
    {
        ft_reverse_rotate(data , 'b');
        ft_rrotate_2(data);
    }
    else
    {
        ft_rotate(data , 'a');
        ft_rotatr_2(data);
    }
}
void ft_algo(t_pushswap *data, int op)
{
    int i;

    i = 0;
    while (i < data->first_len)
    {
        if (data->stack_po[0][0] <= i)
        {
            ft_push_b(data);
            ft_remove_2(data);
            ft_rotate(data, 'b');
            i++;
        }
        else if (data->stack_po[0][0] <= i + op)
        {
            ft_push_b(data);
            ft_remove_2(data);
            i++;
        }
        else
        {
            ft_norminette(data, op);
        }
    }
    pushall_to_stack_a(data);
}
