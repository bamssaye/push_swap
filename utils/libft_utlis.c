/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utlis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 02:17:21 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/15 01:20:29 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

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
			return (ft_error_all(data, 6), 0);
		i++;
	}
	if (nptr[i] != '\0')
		return (ft_error_all(data, 6), 0);
	return (n * p);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	s;
	size_t	i;

	s = nmemb * size;
	if (size && (s / size) != nmemb)
		return (NULL);
	p = malloc(s);
	if (!p)
		return (NULL);
	i = 0;
	while (i < s)
		((unsigned char*)p)[i++] = 0;
	return ((void*)p);
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