/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:01:27 by bamssaye          #+#    #+#             */
/*   Updated: 2024/02/25 14:59:56 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>


typedef struct a_stack 
{
	int				stack;
	struct a_stack	*next;
} t_stack;
 
int     ft_checkarg(char **string);
void    ft_addtostack(char **str);


#endif