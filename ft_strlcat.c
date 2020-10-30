/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 13:00:10 by cveeta            #+#    #+#             */
/*   Updated: 2020/10/30 17:04:48 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t        ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const size_t dst_len = ft_strlen(dst);
	const size_t src_len = ft_strlen(src);
	if (ft_strlen(dst) >= dstsize)
		return (ft_strlen(src) + dstsize);
	dstsize -= ft_strlen(dst);
	while (*dst)
		dst++;
	while (--dstsize && *src)
		*(dst++) = *(src++);
	*dst = '\0';
	return (dst_len + src_len);
}
