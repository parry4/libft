/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psingh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 00:58:49 by psingh            #+#    #+#             */
/*   Updated: 2022/04/25 00:59:06 by psingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)

{
	size_t	dsti;
	size_t	srci;
	size_t	tot_len;

	if (!dstsize)
		return (ft_strlen(src));
	if (dstsize < ft_strlen(dst))
		tot_len = dstsize + ft_strlen(src);
	else
	{
		tot_len = ft_strlen(dst) + ft_strlen(src);
	}
	dsti = ft_strlen(dst);
	srci = 0;
	while (src[srci] && dsti < dstsize - 1)
	{
		dst[dsti] = src[srci];
		dsti++;
		srci++;
	}
	dst[dsti] = '\0';
	return (tot_len);
}
