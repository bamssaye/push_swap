/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 06:01:27 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/15 05:56:47 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct a_pushswap
{
	int		*stack_a;
	int		*stack_b;
	char	**split;
	int		**stack_po;
	char	*str;
	int		*tmp;
	char	**argv;
	char	*line;
	int		c;
	int		first_len;
	int		count_oper;
	int		stack_a_lenght;
	int		stack_a_min;
	int		stack_a_max;
	int		stack_a_index_min;
	int		stack_a_index_max;
	int		stack_a_middle;
	int		stack_b_lenght;
	int		stack_b_min;
	int		stack_b_max;
	int		stack_b_index_min;
	int		stack_b_index_max;
	int		stack_b_middle;

}			t_pushswap;

void		ft_init(t_pushswap *data, char **av);
int			ft_count_a(t_pushswap *data, char **av);
void		ft_checkdup(t_pushswap *data);
int			ft_checksort(t_pushswap *data);

///clean stack
void		ft_sfree_po(int **stack_po, int count);
void		ft_freespac(char **str);
void		ft_error_all(t_pushswap *data, int c);
void		ft_errorss(t_pushswap *data, int c);

//find palce
void		ft_setup_init(t_pushswap *data);
int			ft_find_max(t_pushswap *data, int c);
int			ft_find_min(t_pushswap *data, int c);
int			ft_find_idex_max(t_pushswap *data, int c);
int			ft_find_idex_min(t_pushswap *data, int c);
void		ft_find_middle(t_pushswap *data, int flag);

// sort algorth
void		ft_smallsort(t_pushswap *data);
void		ft_bigsort(t_pushswap *data);
void		ft_setup_po(t_pushswap *data);
void		ft_sort_list(t_pushswap *data);
void		ft_algo(t_pushswap *data, int op);
void		pushall_to_stack_a(t_pushswap *data);
int			ft_findindex(t_pushswap *data, int op, int x);

// operation
void		ft_push_a(t_pushswap *data, int c);
void		ft_push_b(t_pushswap *data, int c);
void		ft_swap(t_pushswap *data, int flag, int c);
void		ft_rotate(t_pushswap *data, int flag, int c);
void		ft_reverse_rotate(t_pushswap *data, int flag, int c);
void		ft_reverse_rotate_all(t_pushswap *data);
void		ft_rotate_all(t_pushswap *data);
void		ft_swap_all(t_pushswap *data);
void		ft_print_op(int flag, int c);

//    UTILS/LIBFT_UTILS
int			ft_isdigit(int c);
size_t		ft_strlen(const char *s);
int			ft_atoi(const char *nptr, t_pushswap *data);
char		*ft_strjoin(char *s1, char *s2);
char		**ft_split(char const *s, char c);
void		*ft_calloc(size_t nmemb, size_t size);
char		*get_next_line(int fd);
void		ft_rotatr_2(t_pushswap *data);
void		ft_remove_2(t_pushswap *data);
void		ft_rrotate_2(t_pushswap *data);

#endif