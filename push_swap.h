/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:01:27 by bamssaye          #+#    #+#             */
/*   Updated: 2024/02/28 19:21:17 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
//#include "./libft/libft.h"

typedef struct a_stack 
{
	int				stack;
	struct a_stack	*next;
} t_stack;

typedef struct a_pushswap
{
	t_stack	*a;
	t_stack	*b;
	char	**split;
	char	*str;
	char	**argv;
	int	length;
} t_pushswap;

//    UTILS/LIBFT_UTILS
int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *nptr);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char const *s, char c);
int     ft_checkarg(t_pushswap *data);
// free Error
void	ft_error(t_pushswap *data);
void	ft_smallerror(void);
void	ft_free_split(char **str);

// add to stack

int ft_addto_stack_a(t_pushswap *data);









 
// void    ft_addtostack(char **str);
// void	ft_freeargs(char **str);
// void	ft_cleanerro(void);
// void	ft_freenode(t_stack *head);


#endif