/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:09:12 by cveeta            #+#    #+#             */
/*   Updated: 2020/10/30 20:34:35 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	char *strr;

	if((str = malloc(len)))
		strr = str;
	else
		return NULL;

	while (start--)
		s++;
	while (len-- && *s)
		*str++ = *s++;
	return strr;
}