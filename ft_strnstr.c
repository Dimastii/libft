/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:27:42 by cveeta            #+#    #+#             */
/*   Updated: 2020/10/30 11:26:23 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
char	*ft_strnstr(const char *big, const char *little, size_t len) {
	char *b;
	char *l;
	char *temp;

	b = (char *) big;
	l = (char *) little;

	unsigned char *haystack;
	unsigned char *litle;
	int i;

	haystack = (unsigned char *) big;
	litle = (unsigned char *) little;

	if (!ft_strlen(litle))
		return (char *) big;

	while (*haystack != 0 && len--) {
		if ((*haystack == *litle) &&
			(ft_strncmp(haystack, litle, strlen(litle)) == 0))
			return haystack;
		haystack++;
	}
	return NULL;
	if (*b++ == *l) {
		temp = b;
		l++;
		printf("±\n");
		while (*b == *l && len--) {
			if (*l + 1 == '\0')
				return temp;
			printf("!%d b = %c l = %c\n", len, *b, *l);
		}
		l = (char *) little;
	}

}