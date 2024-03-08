/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utlis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 02:17:21 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/08 01:22:48 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_atoi(const char *nptr, t_pushswap *data)
{
	int		i;
	int		p;
	long	n;

	i = 0;
	p = 1;
	n = 0;
	if (nptr[i] == '-')
		p *= -1;
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (ft_isdigit(nptr[i]))
	{
		n = 10 * n + nptr[i] - 48;
		if ((n > 2147483647 && p == 1) || (n > 2147483648 && p == -1))
			return (ft_error_all(data, 1), 0);
		i++;
	}
	if (nptr[i] != '\0')
		return (ft_error_all(data, 1), 0);
	return (n * p);
}

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	if (!len)
		return (0);
	while (len > 0 && (*s1 || *s2))
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		len--;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	free(s1);
	return (str);
}