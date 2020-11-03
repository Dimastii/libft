/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 21:53:54 by cveeta            #+#    #+#             */
/*   Updated: 2020/11/01 17:01:58 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include "stdio.h"


char	*ft_strtrim(char const *s1, char const *set)
{
	char *str;
	char *strret;
	const char *temp;
	const char *first;
	const char *last;

	last = s1 + ft_strlen(s1);
	first =  s1;
	if(!(str = malloc(ft_strlen(s1))))
		return NULL;
	strret = str;
	temp = set;
	while(ft_strchr(temp, *s1) && *s1++)
		first = s1;
	s1 = last-1;
	while(ft_strchr(temp, *s1) && *s1--)
		last = s1;
	while(first <= last)
		*str++ = *first++;
	*str = '\0';
	return strret;
}