/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cveeta <cveeta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 15:04:18 by cveeta            #+#    #+#             */
/*   Updated: 2020/10/30 22:12:27 by cveeta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNTITLED_LIBFT_H
#define FT_MIN(A,B) (A>B)? (A):(B)
#include <string.h>

void		*ft_memset(void **memptr, int val, size_t);
void		ft_bzero(void * s , size_t  n );
void		*ft_memcpy(void *dst, const void *src, size_t num);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t count );
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlen(const char *s);
size_t 		ft_strlcpy (char *dst, const char *src, size_t size);
size_t 		ft_strlcat (char *dst, const char *src, size_t size);
char		*ft_strchr(const char *string, int symbol);
char		*ft_strrchr(const char *string, int symbol);
char		*ft_strnstr(const char *big, const char *little, size_t len);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *str);
int			ft_isalpha(int c);
int				ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);


#define UNTITLED_LIBFT_H

#endif //UNTITLED_LIBFT_H
