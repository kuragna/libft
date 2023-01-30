/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:42:12 by aabourri          #+#    #+#             */
/*   Updated: 2023/01/20 12:12:08 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_convert(char *str, int n, int i)
{
	if (n < 0)
		*str = '-';
	while (n >= 0 && --i >= 0)
	{
		str[i] = (n % 10) + 48;
		n /= 10;
	}
	while (n < 0 && --i >= 0)
	{
		str[i] = (n % 10) * -1 + 48;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		tmp;

	i = 0;
	tmp = n;
	if (n == 0 || n < 0)
		i++;
	while (tmp != 0)
	{
		i++;
		tmp /= 10;
	}
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i] = '\0';
	ft_convert(str, n, i);
	return (str);
}
