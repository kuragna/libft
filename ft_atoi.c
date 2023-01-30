/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:50:47 by aabourri          #+#    #+#             */
/*   Updated: 2023/01/24 13:41:44 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isdigit(str[--i]))
#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	pow;
	int	i;

	i = 0;
	pow = 1;
	result = 0;
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
		result += (int)(str[i] - 48) *pow;
		pow *= 10;
	}
	return (result);
}
