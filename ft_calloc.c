/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 01:09:31 by psingh            #+#    #+#             */
/*   Updated: 2022/04/25 01:09:49 by psingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	int		length;

	length = size * count;
	ptr = malloc(length);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, length);
	return (ptr);
}
