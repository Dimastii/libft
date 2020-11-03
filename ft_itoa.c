/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 12:12:04 by cveeta            #+#    #+#             */
/*   Updated: 2020/11/03 12:46:05 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void get_string(char **str,int n)
{
	n %= 10;
	if (n > 10)
		get_string(str,n);
	if (n < 0)
		str = '-'
}

char *ft_itoa(int n)
{
	char c;
	int i;
	int digit;
	char *str;

	digit = n;
	i = 0;
	while (n > 10)
	{
		n %= 10;
		i++;
	}
	n = digit;
	if(!(str = ft_calloc(i,sizeof(char))))
		return NULL;

	get_string(&str,n);
	while (n > 10)
	{
		*str++ = (n / 10) - '0';
		n %= 10;
		ft_itoa(n);
	}
	return str;
}