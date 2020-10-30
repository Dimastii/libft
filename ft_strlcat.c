/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:00:10 by cveeta            #+#    #+#             */
/*   Updated: 2020/10/29 14:22:06 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		len;
	size_t 		lendest;

	lendest = ft_strlen(dst);
	len = FT_MIN(dstsize,lendest) + ft_strlen(src);
	printf("\n");
	if(!(dstsize <= lendest)) {
		dst += lendest;
		dstsize -= lendest;
		while (*src && dstsize-- > 1) {
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return len;
}