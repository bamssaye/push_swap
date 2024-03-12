/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 02:31:50 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/12 02:42:08 by bamssaye         ###   ########.fr       */
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
void push_to_stack_a(t_pushswap *data)
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
            ft_rotate(data , 'a');
            ft_rotatr_2(data);
        }
    }
    push_to_stack_a(data);
}
