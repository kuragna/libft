/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:21:55 by aabourri          #+#    #+#             */
/*   Updated: 2023/01/27 20:25:15 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	end = ft_strlen(s1);
	while (i < end && ft_strchr(set, s1[i]))
		i++;
	while (i < end && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(&s1[i], 0, (end - i) + 1));
}
