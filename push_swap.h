/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:01:27 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/08 01:21:11 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
//#include "./libft/libft.h"

// typedef struct a_stack 
// {
// 	int				stack;
// 	int				index;
// 	struct a_stack	*next;
// } t_stack;

typedef struct a_pushswap
{
	int	*stack_a;
	int	*stack_b;
	char	**split;
	char	*str;
	int		*tmp;
	char	**argv;
	int		count_oper;
	int		stack_a_lenght;
	int		stack_a_min;
	int		stack_a_max;
	int		stack_a_index_min;
	int		stack_a_index_max;
	int		stack_b_lenght;
	int		stack_b_min;
	int		stack_b_max;
	int		stack_b_index_min;
	int		stack_b_index_max;
	
} t_pushswap;

void 	ft_init(t_pushswap *data, char **av);
int		ft_count_a(t_pushswap *data, char **av);
char	**ft_split(char const *s, char c);
void	ft_error_all(t_pushswap *data, int c);
void	ft_freespac(char **str);
void	ft_checkdup(t_pushswap *data);


//find palce
int     ft_find_max(t_pushswap *data, int c);
int     ft_find_min(t_pushswap *data, int c);
int     ft_find_idex_max(t_pushswap *data, int c);
int     ft_find_idex_max(t_pushswap *data, int c);










//    UTILS/LIBFT_UTILS
int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *nptr, t_pushswap *data);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
char	*ft_strjoin(char *s1, char *s2);
// char	**ft_split(char const *s, char c);
// int     ft_checkarg(t_pushswap *data);
// // free Error
// void	ft_error(t_pushswap *data);
// void	ft_smallerror(void);
// void	ft_free_split(char **str);

// // add to stack

// int ft_addto_stack_a(t_pushswap *data);









 
// void    ft_addtostack(char **str);
// void	ft_freeargs(char **str);
// void	ft_cleanerro(void);
// void	ft_freenode(t_stack *head);


#endif