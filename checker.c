/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 23:44:10 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/15 02:58:18 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header/push_swap_bonus.h"


int main(int ac, char **av)
{
    t_pushswap  *checker;
    char        *line;
    
    if(ac > 1)
    {
        checker = malloc(sizeof(t_pushswap));
        checker->c = 0;
        ft_init(checker, av);
        line = get_next_line(0);
        while(line)
        {   
            ft_checkinput(checker, line);
            free(line);
            line = get_next_line(0);
        }
        free(line);
        if (!ft_checksort(checker) && !checker->stack_b_lenght)
            write(1, "OK\n", 3);
        else
            write(1, "KO\n", 3);
        ft_errorss(checker, 0);
    }
    return (0);
}
