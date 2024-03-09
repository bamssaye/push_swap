/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 01:42:38 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/09 05:51:07 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void ft_checksort(t_pushswap *data)
{
    int i;

    i = 0;
    while (i < data->stack_a_lenght - 1)
    {
        if (data->stack_a[i] > data->stack_a[i + 1])
            return;
        i++;
    }
    ft_error_all(data, 3);
}

void ft_sort_three(t_pushswap *data)
{
    if (data->stack_a[data->stack_a_lenght - 1] == ft_find_max(data, 'a'))
            ft_swap(data, 'a');
    else if (data->stack_a[data->stack_a_lenght - 1] == ft_find_min(data, 'a') 
    && data->stack_a[0] == ft_find_max(data, 'a'))
    {
        ft_rotate(data, 'a');
        ft_swap(data, 'a');
        
    }
    else if (data->stack_a[0] == ft_find_max(data, 'a')
    && data->stack_a[1] == ft_find_min(data, 'a'))
        ft_rotate(data, 'a');
    else if (data->stack_a[1] == ft_find_max(data, 'a') 
    && data->stack_a[0] == ft_find_min(data, 'a'))
    {
        ft_swap(data, 'a');
        ft_rotate(data, 'a');
    }
    else if (data->stack_a[1] == ft_find_max(data, 'a') 
    && data->stack_a[data->stack_a_lenght - 1] == ft_find_min(data, 'a'))
        ft_reverse_rotate(data, 'a');
}

void	ft_smallsort(t_pushswap *data, int count)
{
    ft_checksort(data);
    if (count == 2)
        ft_swap(data, 'a');
    if (count == 3)   
        ft_sort_three(data);
    // int i = 0;
    // while(i < data->stack_a_lenght)
    //     printf("%d ", data->stack_a[i++]);
    // printf("\n%d %d", ft_find_min(data, 'a'), ft_find_max(data, 'a'));

}
/*


2 3 1 -> 3 2 1 -> sa



*/