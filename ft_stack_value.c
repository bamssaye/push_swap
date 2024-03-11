/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:23:58 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/11 05:35:30 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_find_max(t_pushswap *data, int c)
{
    int i;
    int max;

    i = -1;
    if (c == 'a')
    {
        if (data->stack_a_lenght < 2)
            return (0);
        max = data->stack_a[0];
        while (++i < data->stack_a_lenght)
            if (data->stack_a[i] > max)
                max = data->stack_a[i];
    }
    else
    {
        if (data->stack_b_lenght < 2)
            return (0);
        max = data->stack_b[0];
        while (++i < data->stack_b_lenght)
            if (data->stack_b[i] > max)
                max = data->stack_b[i];
    }
    return (max);
}

int ft_find_min(t_pushswap *data, int c)
{
    int i;
    int min;

    i = -1;
    if (c == 'a')
    {
        if (data->stack_a_lenght < 2)
            return (0);
        min = data->stack_a[0];
        while (++i < data->stack_a_lenght)
            if (data->stack_a[i] < min)
                min = data->stack_a[i];
    }
    else
    {
        if (data->stack_b_lenght < 2)
            return (0);
        min = data->stack_b[0];
        while (++i < data->stack_b_lenght)
            if (data->stack_b[i] < min)
                min = data->stack_b[i];
    }
    return (min);
}
int ft_find_idex_max(t_pushswap *data, int c)
{
    int i;
    int max_idex;

    i = -1;
    if (c == 'a')
    {
        if (data->stack_a_lenght < 2)
            return (0);
        max_idex = ft_find_max(data, 'a');
        while (++i < data->stack_a_lenght)
            if (data->stack_a[i] == max_idex)
                max_idex = i;
    }
    else
    {
        if (data->stack_b_lenght < 2)
            return (0);
        max_idex = ft_find_max(data, 'b');
        while (++i < data->stack_b_lenght)
            if (data->stack_b[i] == max_idex)
                max_idex = i;
    }
    return (max_idex);
}

int ft_find_idex_min(t_pushswap *data, int c)
{
    int i;
    int min_idex;

    i = -1;
    if (c == 'a')
    {
        if (data->stack_a_lenght < 2)
            return (0);
        min_idex = ft_find_min(data, 'a');
        while (++i < data->stack_a_lenght)
            if (data->stack_a[i] == min_idex)
                break;
    }
    else
    {
        if (data->stack_b_lenght < 2)
            return (0);
        min_idex = ft_find_min(data, 'b');
        while (++i < data->stack_b_lenght)
            if (data->stack_b[i] == min_idex)
                break;
    }
    return (i);
}

int ft_find_mid(t_pushswap *data, int c)
{
    int ind_mid;

    ind_mid = 0;
    if (c == 'a')
    {
        if (data->stack_a_lenght % 2 == 0)
            ind_mid = data->stack_a_lenght / 2;
        else
            ind_mid = (data->stack_a_lenght / 2) + 1;
    }
    else
    {
        if (data->stack_b_lenght % 2 == 0)
            ind_mid = data->stack_b_lenght / 2;
        else
            ind_mid = (data->stack_b_lenght / 2) + 1;
    }
    return (ind_mid);
}