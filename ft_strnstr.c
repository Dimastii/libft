/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:27:42 by cveeta            #+#    #+#             */
/*   Updated: 2020/10/30 12:02:22 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len) {
	unsigned char *haystack;
	unsigned char *litle;

	haystack = (unsigned char *) big;
	litle = (unsigned char *) little;

	if (!ft_strlen(litle))
		return (char *) big;

	while (*haystack != 0 && len--) {
		if ((*haystack == *litle) && !(ft_strncmp(haystack, litle, strlen(litle)))) {
			return haystack;
		}
		haystack++;
	}
	return NULL;
}