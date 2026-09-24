/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoura <hmoura@42porto.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 22:05:27 by hmoura            #+#    #+#             */
/*   Updated: 2026/09/22 22:05:27 by hmoura           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	count;
	int	flag;

	if (!s)
		return (0);
	flag = 1;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			flag = 1;
		else if (flag == 1)
		{
			count++;
			flag = 0;
		}
		i++;
	}
	return (count);
}

int	ft_word_len(char const *s, char c)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

char	*ft_copy(char const *s, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc (sizeof(char) * len + 1);
	if (word == NULL)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		words;
	int		i;
	int		j;
	int		len;

	words = ft_countwords(s, c);
	array = (char **)malloc (sizeof(char *) * (words + 1));
	if (array == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < words)
	{
		while (s[i] == c)
		{
			i++;
		}
		len = ft_word_len(&s[i], c);
		array[j] = ft_copy (&s[i], len);
		i = i + len;
		j++;
	}
	array[j] = NULL;
	return (array);
}
