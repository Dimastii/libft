/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:13:04 by cveeta            #+#    #+#             */
/*   Updated: 2020/11/03 21:29:26 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t		count_of_words(char const *s, char c)
{
	size_t words;

	words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			words++;
			while (*s && *s != c)
				s++;
		}
	}
	return (words);
}

static void			free_words(char **words, size_t i)
{
	while (i--)
		if (&(words[i]) && *&(words[i]))
		{
			free(*&(words[i]));
			*&(words[i]) = NULL;
		}
	free(*words);
}

static char			*get_word(char *word, char c)
{
	char *start;

	start = word;
	while (*word && *word != c)
		word++;
	*word = '\0';
	return (ft_strdup(start));
}

static char			**get_words(char *s, char c, size_t w_c)
{
	char	**words;
	char	*w;
	size_t	i;

	i = 0;
	if ((words = (char **)ft_calloc(sizeof(char *) * (w_c + 1), sizeof(char*))))
	{
		while (i < w_c)
		{
			while (*s == c)
				s++;
			if (*s)
			{
				if (!(w = get_word(s, c)))
				{
					free_words(words, i);
					return (NULL);
				}
				words[i++] = w;
				s += (ft_strlen(w) + 1);
			}
		}
		words[i] = NULL;
	}
	return (words);
}

char				**ft_split(const char *s, char c)
{
	char	**words;
	char	*line;

	if (!s)
		return (NULL);
	line = ft_strdup((char *)s);
	words = get_words(line, c, count_of_words(line, c));
	free(line);
	return (words);
}
