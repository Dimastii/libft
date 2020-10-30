/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:53:05 by cveeta            #+#    #+#             */
/*   Updated: 2020/10/28 21:02:24 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char 	*d;
	unsigned char	*s;
	char f;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	f = (unsigned char)c;

	while (n) {
		if(f == *s)
			return NULL;
		*d = *s;
		d++;
		s++;
		n--;
	}

	return dst;
}