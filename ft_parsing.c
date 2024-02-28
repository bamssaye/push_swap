/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:40:37 by bamssaye          #+#    #+#             */
/*   Updated: 2024/02/28 17:08:14 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>

static char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;
	int		i;

	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

static int ft_zero(char *str)
{
    if (!ft_strncmp(str, "-0",ft_strlen(str)) || !ft_strncmp(str, "0",ft_strlen(str)) || !ft_strncmp(str, "+0",ft_strlen(str)))
            return (1);
    return (0);
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
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

static int ft_checkall(t_pushswap *data)
{
    int i;

    i = 0;
    data->split = ft_split(data->str, ' ');
    while (data->split[i] != NULL)
    {
        if ((!ft_atoi(data->split[i]) && !ft_zero(data->split[i])) || !ft_checkduplicat(data->split))
            return (0);
        i++;
    }
    return (1);
}

int ft_checkarg(t_pushswap *data)
{
    int i;
    int check;

    check = 1;
    i = 1;
    while (data->argv[i] != NULL)
    {
        if (check == 1)
        {
            data->str = ft_strdup(data->argv[i]);
            check = 0;
        }
        else
            data->str = ft_strjoin(data->str, data->argv[i]);
        if (data->argv[i + 1] != NULL)
            data->str = ft_strjoin(data->str, " ");
        i++;
    }
    if(!ft_checkall(data))
        return (0);
    return (1);
}
