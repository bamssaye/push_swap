/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortrules.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:17:53 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/06 02:02:32 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void ft_swap(t_pushswap *data, int stack)
{
    int tmp;
    
    if (stack == 'a' && !ft_checksort(data))
    {
        tmp = data->a->stack;
        data->a->stack = data->a->next->stack;
        data->a->next->stack = tmp;
        printf("sa\n");
    }
    else (stack == 'b')
    {
        tmp = data->b->stack;
        data->b->stack = data->b->next->stack;
        data->b->next->stack = tmp;
        printf("sb\n");
    }
}
void ft_push(t_pushswap *data)
{
    
}
void ft_rotate(t_pushswap *data)
{
    
}
void ft_reverse_rotate(t_pushswap *data)
{
    
}