/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:13:04 by cveeta            #+#    #+#             */
/*   Updated: 2020/11/03 12:08:03 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t    count_of_words(char const *s, char c)
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



void	ft_strdel(char **as)
{
	if (as && *as)
	{
		free(*as);
		*as = NULL;
	}
}

static void        free_words(char **words, size_t i)
{
	while (i--)
		if (&(words[i]) && *&(words[i]))
		{
			free(*&(words[i]));
			*&(words[i]) = NULL;
		}
	free(*words);
}

static char        *get_word(char *word, char c)
{
	char *start;

	start = word;
	while (*word && *word != c)
		word++;
	*word = '\0';
	return (ft_strdup(start));
}

static char        **get_words(char *s, char c, size_t words_count)
{
	char    **words;
	char    *word;
	size_t    i;

	i = 0;
	if ((words = (char **)ft_calloc(sizeof(char *) * (words_count + 1),sizeof(char*))))
	{
		while (i < words_count)
		{
			while (*s == c)
				s++;
			if (*s)
			{
				if (!(word = get_word(s, c)))
				{
					free_words(words, i);
					return (NULL);
				}
				words[i++] = word;
				s += (ft_strlen(word) + 1);
			}
		}
		words[i] = NULL;
	}
	return (words);
}

char            **ft_split(const char *s, char c)
{
	char    **words;
	char    *line;

	if (!s)
		return (NULL);
	line = ft_strdup((char *)s);
	words = get_words(line, c, count_of_words(line, c));
	free(line);
	return (words);
}