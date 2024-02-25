/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:40:37 by bamssaye          #+#    #+#             */
/*   Updated: 2024/02/25 14:58:23 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

static char	**ft_freeargs(char **str)
{
	int	i;

	i = 0;
    while (str[i])
        i++;
    int j = 0;
	while (j < i)
		free(str[j++]);
	free(str);
	return (NULL);
}
static int ft_checkduplicat(char **str)
{
    int i;
    int j;
    int len;
    
    i = 0;
    while (str[i])
    {
        j = i + 1;
        while (str[j])
        {
            if (ft_strlen(str[i]) < ft_strlen(str[j]))
                len = ft_strlen(str[j]);
            else
                len = ft_strlen(str[i]);
            if (!ft_strncmp(str[i], str[j], len))
                return (ft_freeargs(str), 0);
            j++;
        }
        i++;
    }
    ft_addtostack(str);
    return (1);
}

static int ft_checkstring(char *str)
{
    char **split;
    int i;
    
    i = 0;
    while (str[i])
    {
        if (ft_isdigit(str[i]) || str[i] == ' ' || str[i] == '+' || str[i] == '-')
            i++;
        else
            return (0);        
    }
    i = 0;
    split = ft_split(str,' ');
    while (split[i])
    {
        if(!ft_isdigit(split[i][0]) && !ft_isdigit(split[i][1])) 
            return 0;
        i++;
    }
    if (!ft_checkduplicat(split))
        return (0);
    return (1);
}

int ft_checkarg(char **string)
{
  
    int i;
    char *all_stack;
    
    i = 1;
    if (string[i + 1] != NULL)
    {
        all_stack = ft_strdup(string[i++]);
        all_stack = ft_strjoin(all_stack, " ");
    }
    else
        all_stack = ft_strdup(string[i++]);
    while (string[i])
    {
        all_stack = ft_strjoin(all_stack, string[i]);
        if (string[i + 1] != NULL)
            all_stack = ft_strjoin(all_stack, " ");
        i++;
    }
    if (!ft_checkstring(all_stack))
        return (0);
    return (1);
}
