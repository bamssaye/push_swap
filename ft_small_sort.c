/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 01:42:38 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/08 03:02:42 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void ft_checksort(t_pushswap *data, int count)
{
    int i;

    i = 0;
    while (i < count)
    {
        if (data->stack_a[i] > data->stack_a[i + 1])
            return;
        i++;
    }
    ft_error_all(data, 3);
}

void ft_sort_three(t_pushswap *data, int count)
{
    (void)data;
    (void)count;
    ft_error_all(data, 3);
}

void	ft_smallsort(t_pushswap *data, int count)
{
    int tmp;

    ft_checksort(data, count);
    if (count == 2)
    {
        tmp = data->stack_a[0];
        data->stack_a[0] = data->stack_a[1];
        data->stack_a[1] = tmp;
        write(1, "sa\n", 3);
    }
    else if (count == 3)
    {
        if (data->stack_a[count - 1] == ft_find_max(data, 'a'))
            ft_smallsort(data, 2);
        int i = 0;
        while (i < count)
            printf("%d", data->stack_a[i++]);
        ft_sort_three(data, count);
    }
}
