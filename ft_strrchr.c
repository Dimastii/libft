/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:08:11 by cveeta            #+#    #+#             */
/*   Updated: 2020/10/29 15:23:25 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	char *str;
	char sb;
	unsigned int len;

	len = ft_strlen(string);
	sb = (char) symbol;
	str = (char*) (string + len);
	while (len)
	{
		if (*str == sb)
			return str;
		str--;
		len--;
	}
	return NULL;
}

