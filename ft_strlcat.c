/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 18:53:02 by aabourri          #+#    #+#             */
/*   Updated: 2023/01/16 12:14:45 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	len = ft_strlen(dst);
	j = len;
	while (src[i] != '\0' && i < ((double)dstsize - len - 1))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	if (dstsize < len)
		return (ft_strlen(src) + dstsize);
	return (ft_strlen(src) + len);
}
