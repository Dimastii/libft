/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:13:00 by cveeta            #+#    #+#             */
/*   Updated: 2020/10/28 21:14:54 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void* dst, const void* src, size_t count )
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d < s)
		while (count--)
			*d++ = *s++;
	else
	{
		d += count;
		s += count;
		while (count--)
			*--d = *--s;
	}
	return (dst);
}