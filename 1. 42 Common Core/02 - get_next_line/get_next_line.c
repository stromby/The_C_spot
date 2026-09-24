/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:14:30 by hmoura            #+#    #+#             */
/*   Updated: 2026/09/24 16:05:32 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_to_storage(int fd, char *storage)
{
	char	*buffer;
	ssize_t	read_bytes;

	if (!storage)
		storage = ft_strdup("");
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer || !storage)
		return (free(storage), NULL);
	read_bytes = 1;
	while (!ft_strchr(storage, '\n') && read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
			return (free(buffer), free(storage), NULL);
		buffer[read_bytes] = '\0';
		storage = ft_strjoin(storage, buffer);
	}
	free(buffer);
	return (storage);
}

static char	*extract_line(char *storage)
{
	int		i;
	char	*str;

	i = 0;
	if (!storage || !storage[i])
		return (NULL);
	while (storage[i] && storage[i] != '\n')
		i++;
	if (storage[i] == '\n')
		str = malloc(sizeof(char) * (i + 2));
	else
		str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (storage[i] && storage[i] != '\n')
	{
		str[i] = storage[i];
		i++;
	}
	if (storage[i] == '\n')
		str[i++] = '\n';
	str[i] = '\0';
	return (str);
}

char	*clean_storage(char *storage)
{
	int		i;
	char	*str;

	if (!storage)
		return (NULL);
	i = 0;
	while (storage[i] && storage[i] != '\n')
		i++;
	if (storage[i] == '\0')
	{
		free(storage);
		return (NULL);
	}
	str = ft_strdup(&storage[i + 1]);
	free(storage);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	storage = read_to_storage(fd, storage);
	if (!storage)
		return (NULL);
	line = extract_line(storage);
	storage = clean_storage(storage);
	return (line);
}
