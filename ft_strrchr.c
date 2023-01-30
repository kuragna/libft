/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:58:55 by aabourri          #+#    #+#             */
/*   Updated: 2023/01/25 15:52:15 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;

	ch = (unsigned char)c;
	i = ft_strlen(s);
	if (ch == 0)
		return ((char *)s + i);
	while ((s[i] != ch) && (i > 0))
		i--;
	if (s[i] == ch)
		return ((char *)s + i);
	return (NULL);
}
