/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operation_full.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 02:34:08 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/12 23:33:15 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_swap_all(t_pushswap *data)
{
    ft_swap(data, 'a');
    ft_swap(data, 'b');
    write(1, "ss\n", 3);
}

void    ft_rotate_all(t_pushswap *data)
{
    ft_rotate(data, 'a');
    ft_rotate(data, 'b');
    write(1, "rr\n", 3);
}

void    ft_reverse_rotate_all(t_pushswap *data)
{
    ft_reverse_rotate(data, 'a');
    ft_reverse_rotate(data, 'b');
    write(1, "rrr\n", 4);
}
