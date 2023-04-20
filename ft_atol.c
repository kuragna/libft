/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:38:09 by aabourri          #+#    #+#             */
/*   Updated: 2023/04/20 18:38:10 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atol(const char *str)
{
	long	re;
	long	pow;
	int		i;

	i = 0;
	pow = 1;
	re = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' && str[i + 1] != '+')
	{
		i++;
		pow = -1;
	}
	if (str[i] == '+')
		i++;
	while (48 <= str[i] && 57 >= str[i])
		i++;
	while (i > 0 && (48 <= str[--i] && 57 >= str[i]))
	{
		re += (long)(str[i] - 48) *pow;
		pow *= 10;
	}
	return (re);
}
