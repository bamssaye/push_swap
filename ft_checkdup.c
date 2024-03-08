/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:54:43 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/08 01:22:15 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_checknumber(int *list, int size)
{
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (list[i] == list[j])
                return (1);
            j++;
        } 
        i++;
    }
    return (0);
}

void	ft_checkdup(t_pushswap *data)
{
    int i;
    
    data->tmp = malloc(sizeof(int) * data->stack_a_lenght);
    i = -1;
    while(data->split[++i])
        data->tmp[i] = ft_atoi(data->split[i], data);
    if (ft_checknumber(data->tmp, data->stack_a_lenght))
        ft_error_all(data, 1);
    i = 0;
    while (i < data->stack_a_lenght)
        printf("%d->", data->tmp[i++]);
}