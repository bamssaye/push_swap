/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 02:21:01 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/15 08:54:59 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

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

static void	ft_check_valid(char *str, t_pushswap *data)
{
	int	i;

	i = -1;
	while (str[++i])
		if (ft_isdigit(str[i]))
			break ;
	if (!str[i])
		ft_error_all(data, 2);
	i = 0;
	while (str[i])
	{
		if (((str[i] == '-') && (!ft_isdigit(str[i + 1]))) || ((str[i] == '+')
				&& (!ft_isdigit(str[i + 1]))))
			ft_error_all(data, 2);
		if ((ft_isdigit(str[i])) || (str[i] == ' ') || (str[i] == '-')
			|| (str[i] == '+'))
			i++;
		else
			ft_error_all(data, 2);
	}
}

int	ft_count_a(t_pushswap *data, char **av)
{
	int		i;
	int		check;

	check = 0;
	i = 1;
	while (av[i])
	{
		ft_check_valid(av[i], data);
		if (check == i - 1)
			data->str = ft_strdup(av[i]);
		else
			data->str = ft_strjoin(data->str, av[i]);
		if (av[i + 1] != NULL)
			data->str = ft_strjoin(data->str, " ");
		i++;
	}
	data->split = ft_split(data->str, ' ');
	i = 0;
	while (data->split[i])
		i++;
	return (i);
}
