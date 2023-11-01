/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabourri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:27:37 by aabourri          #+#    #+#             */
/*   Updated: 2023/11/01 15:30:46 by aabourri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO: UNFINISHED
// TODO: needs more test
void	*ft_realloc(void *ptr, size_t size)
{
	void	*new;

	new = malloc(size);
	if (!new)
		return (NULL);
	ft_memcpy(new, ptr, size);
	free(ptr);
	return (new);
}
