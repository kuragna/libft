/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:04:33 by aabourri          #+#    #+#             */
/*   Updated: 2023/01/24 14:31:18 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;
	int		len;
	int		i;

	i = 0;
	tmp = lst;
	len = ft_lstsize(lst) - 1;
	while (i < len)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
