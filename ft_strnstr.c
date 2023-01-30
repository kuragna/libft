/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:16:06 by aabourri          #+#    #+#             */
/*   Updated: 2023/01/18 11:16:07 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (*haystack == 0 && needle_len != 0)
		return (NULL);
	if (needle_len == 0)
		return ((char *)haystack);
	while (len >= needle_len)
	{
		len--;
		if (*haystack == needle[0])
		{
			if (!ft_strncmp(haystack, needle, needle_len))
				return ((char *)haystack);
		}
		haystack++;
	}	
	return (NULL);
}
