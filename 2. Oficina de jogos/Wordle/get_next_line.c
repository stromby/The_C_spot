#include <unistd.h>
#include <stdlib.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

int ft_strlen(const char *str)
{
	int i;

	i = 0;

	while (str[i])
		i++;

	return (i);
}

char	*ft_strchr(const char *str, int c)
{
  	while (*str)
  	{
		if (*str == c)
			return ((char *)str);
		str++;
	}

	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char *str;
	int i;
	int j;

	i = 0;
	j = 0;

	while (s1 && s1[i])
		i++;

	while (s2[j])
		j++;

	str = malloc(sizeof(char) * (i + j + 1));

	if (!str)
	{
		if (s1)
			free(s1);
		return (NULL);
	}

	i = 0;

	while (s1 && s1[i])
	{
		str[i] = s1[i];
		i++;
	}

	j = 0;

	while (s2[j])
		str[i++] = s2[j++];

	str[i] = '\0';

	free(s1);
	return (str);
}

char *ft_strdup(char *str)
{
	int i;
	char *ptr;

	if (!str)
		return (NULL);

	i = 0;

	while (str[i])
		i++;

	ptr = malloc(sizeof(char) * (i + 1));

	if (!ptr)
		return (NULL);

	i = 0;

	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}

	ptr[i] = '\0';

	return (ptr);
}

char *get_next_line(int fd)
{
	static char *backup = NULL;
	char *temp_rest;
	char buffer[BUFFER_SIZE + 1];
	char *line;
	int bytes_lidos;
	int i;
	int len_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);

	bytes_lidos = 1;

	while (bytes_lidos > 0 && (!backup || !ft_strchr(backup, '\n')))
	{
		bytes_lidos = read(fd, buffer, BUFFER_SIZE);

		if (bytes_lidos == -1)
		{
			free(backup);
			backup = NULL;
			return (NULL);
		}

		buffer[bytes_lidos] = '\0';
		backup = ft_strjoin(backup, buffer);
	}

	if (!backup || *backup == '\0')
	{
		free(backup);
		backup = NULL;
		return (NULL);
	}

	i = 0;

	while (backup[i] && backup[i] != '\n')
		i++;

	if (backup[i] == '\n')
		len_line = i + 1;
	else
		len_line = i;

	line = malloc(sizeof(char) * (len_line + 1));

	if(!line)
		return (NULL);

	i = 0;

	while (i < len_line)
	{
		line[i] = backup[i];
		i++;
	}

	line[i] = '\0';


	temp_rest = backup;

	backup = ft_strdup(temp_rest + len_line);

	free(temp_rest);

	return(line);
}
