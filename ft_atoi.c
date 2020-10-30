/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:57:07 by cveeta            #+#    #+#             */
/*   Updated: 2020/10/30 12:25:27 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
int		ft_atoi(const char *str)
{
	unsigned char *c;

	int sign;
	int dig;

	dig = 0;
	sign = 1;

	c = (unsigned char*)str;
	if(*c == '-')
	{
		sign *= -1;
		c++;
	}
	while (ft_isdigit(*c))
	{
		printf("v");
		dig = dig * 10 + *c - '0';
		c++;
	}
	return dig;
}