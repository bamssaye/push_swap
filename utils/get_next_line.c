/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bamssaye <bamssaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 08:05:17 by bamssaye          #+#    #+#             */
/*   Updated: 2024/03/15 08:36:14 by bamssaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap_bonus.h"


static int	ft_getline(char *getline, char *buffer);
static char	*ft_free(char *getline, char **buffer);


char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*getline;
	int			bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	getline = ft_calloc(BUFFER_SIZE, sizeof(char));
	if (!getline)
		return (NULL);
	if (!buffer)
		buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	while (1)
	{
		getline = ft_strjoin(getline, buffer);
		if (ft_getline(getline, buffer))
			return (getline);
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes <= 0)
			return (ft_free(getline, &buffer));
		buffer[bytes] = '\0';
	}
	return (NULL);
}

static int	ft_getline(char *getline, char *buffer)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (getline[i] && getline[i] != '\n')
		i++;
	if (getline[i] == '\n')
		i++;
	else
		return (0);
	while (getline[i])
		buffer[j++] = getline[i++];
	buffer[j] = '\0';
	getline[i - j] = '\0';
	return (1);
}

static char	*ft_free(char *getline, char **buffer)
{
	free(*buffer);
	*buffer = NULL;
	if (*getline)
		return (getline);
	free(getline);
	return (NULL);
}
