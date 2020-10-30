/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 23:08:44 by cveeta            #+#    #+#             */
/*   Updated: 2020/10/29 12:45:45 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		len;
	const char *sr;

	sr = src;
	len = ft_strlen(src);
	while (dstsize - 1)
	{
		*dst++ = *sr++;
		dstsize--;
	}
	*dst = '\0';
	return len;
}