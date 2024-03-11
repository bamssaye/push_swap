/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 02:54:10 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/11 07:31:15 by bamssaye         ###   ########.fr       */
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
void push_to_stack_a(t_pushswap *data)
{
    int     i;
    int     count;
    //int     tmp;
   // int     tmp1;
    
    i = 0;
    count = 3;
    (void)data;
    while (i < count)
    {
        //ft_setup_init(data);
        //tmp = (data->stack_b_lenght - data->stack_b_index_max) + 1;
        //tmp1 = data->stack_b_index_max;
        //printf("%d", data->stack_b_index_max);
        //sleep(1);
        // if (data->stack_b_index_max == 0)
        // {
        //     ft_push_a(data);
        //     i++;
        // }  
        // else
        // {
        //     // if (data->stack_b_index_max > data->stack_b_middle)
        //     //     while (--tmp)
        //     //         ft_reverse_rotate(data, 'b');
        //     // else
        //     //     while (--tmp1)
        //     //         ft_rotate(data, 'b');
        //     i++;
        // }
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
        }
    }
   // push_to_stack_a(data);
    // i = -1;
    // while (++i < count)
    //     ft_push_a(data);
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
