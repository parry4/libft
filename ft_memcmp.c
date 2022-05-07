/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:52:40 by psingh            #+#    #+#             */
/*   Updated: 2022/04/25 00:52:55 by psingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr_1;
	unsigned char	*ptr_2;

	ptr_1 = (unsigned char *)s1;
	ptr_2 = (unsigned char *)s2;
	i = 0;
	while (i < n && ptr_1[i] == ptr_2[i])
	{
		i++;
	}
	if (i < n)
		return (ptr_1[i] - ptr_2[i]);
	return (0);
}
