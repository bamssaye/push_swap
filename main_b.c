/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 23:44:10 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/13 00:17:01 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int main(int ac, char **av)
{
    t_pushswap  *checker;
    char        *line;
    if(ac > 1)
    {
        checker = malloc(sizeof(t_pushswap));
        ft_init(checker, av);
        line = get_next_line(0);
        
    }
    return (0);
}