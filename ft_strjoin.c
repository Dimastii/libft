/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 20:40:42 by cveeta            #+#    #+#             */
/*   Updated: 2020/10/30 20:53:16 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	char *strr;
	size_t len;

	len = ft_strlen(s1) +ft_strlen(s2);
	if((str = malloc(len)))
		strr = str;
	else
		return NULL;
	while(*s1)
		*strr++ = *s1++;
	while(*s2)
		*strr++ = *s2++;
	return str;
}