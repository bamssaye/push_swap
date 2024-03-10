/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 02:54:10 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/10 06:48:49 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_sort_list(t_pushswap *data)
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

static int ft_finarry(t_pushswap *data, int value)
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
        data->stack_po[i++] = malloc(sizeof(int) * count);
    i = 0;
    while (i < count)
    {
            data->stack_po[i][0] = ft_finarry(data, data->stack_a[i]);
            data->stack_po[i][1] = data->stack_a[i];
        i++; 
    }
}

void ft_algo(t_pushswap *data, int op)
{
    int i;
    int count;

    i = 0;
    count = data->stack_a_lenght;
    while (i < count)
    {
        if (data->stack_po[i] <= i)
        {
            ft_push_b(data);
            ft_rotate(data, 'b');
            i++;
        }
        else if (data->stack_po[i] <= i + op)
        {
            ft_push_b(data);
            i++;
        }
        else if ()
    }
}
void	ft_bigsort(t_pushswap *data)
{
    int i;
    
    i = -1;
    while (++i < data->stack_a_lenght)
        data->tmp[i] = data->stack_a[i];
    ft_sort_list(data);
    ft_setup_po(data);
    // i = 0;
    // int j = 0;
    // while (i < data->stack_a_lenght)
    // {
    //     j = 0;
    //     while (j < 2)
    //         printf("index %d Value ", data->stack_po[i][j++]);
    //     printf("\n");
    //     i++;
    // }
    if (data->stack_a_lenght < 400)
        ft_algo(data, 15);
    else
        ft_algo(data, 30);
    ft_sfree_po(data->stack_po);
}
