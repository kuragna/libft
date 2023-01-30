/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:18:08 by aabourri          #+#    #+#             */
/*   Updated: 2023/01/27 20:02:31 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_split_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s && s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
	}
	return (count);
}

static size_t	ft_split_len(char const *s, char c, size_t *pos, size_t	*start)
{
	size_t	len;
	size_t	i;

	i = *pos;
	len = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		*start = i;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			len++;
		}
		break ;
	}
	*pos = i;
	return (len);
}

static char	**ft_split_free(char **s, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(s[i]);
		s[i] = NULL;
		i++;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	start;
	size_t	len;
	size_t	pos;
	size_t	i;

	pos = 0;
	i = 0;
	len = 0;
	start = 0;
	strs = (char **)malloc((ft_split_count(s, c) + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	while (i < ft_split_count(s, c))
	{
		len = ft_split_len(s, c, &pos, &start);
		strs[i] = (char *)malloc((len + 1) * sizeof(char));
		if (!strs)
			return ((char **)ft_split_free(strs, ft_split_count(s, c)));
		ft_memcpy(strs[i], s + start, len);
		strs[i][len] = '\0';
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
