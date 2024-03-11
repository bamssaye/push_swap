/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 02:54:10 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/11 01:15:04 by bamssaye         ###   ########.fr       */
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
        data->stack_po[i++] = malloc(sizeof(int) * 3);
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
            // printf("=== %d %d\n", data->stack_po[0][0], data->stack_po[0][1]);
        }
        //printf("%d %d", data->stack_po[0][0], data->stack_po[0][1]);
    }
    i = -1;
    while (++i < count)
        ft_push_a(data);
    // printf("%d %d", data->stack_a_lenght, data->stack_b_lenght);
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
    // while (i < data->stack_a_lenght)
    // {
    //         printf("index %d Value %d", data->stack_po[i][0] , data->stack_po[i][1]);
    //     printf("\n");
    //     i++;
    // }
    //ft_sfree_po(data->stack_po);
    if (data->stack_a_lenght < 400)
        ft_algo(data, 15);
    else
        ft_algo(data, 30);
    ft_sfree_po(data->stack_po);
}
