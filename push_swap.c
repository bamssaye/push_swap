/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:01:30 by bamssaye          #+#    #+#             */
/*   Updated: 2024/02/28 17:10:46 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_init(char **av)
{ 
    t_pushswap *data = malloc(sizeof(t_pushswap));
    if (data == NULL)
        return(0);
    data->argv = av;
    data->a = NULL;
    data->b = NULL;
    if (!ft_checkarg(data))
        return (ft_error(data), 0);
    if (!ft_addto_stack_a(data))
        return (ft_error(data), 0);
    return (1);
}
int main(int ac, char **av)
{
    int         i;
    
    i = 0;
    if (ac > 1)
    {
        if (!ft_init(av))
            return (ft_smallerror(), 0);
    }
}
