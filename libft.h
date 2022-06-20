/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:58:17 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/20 18:17:26 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>

int			ft_isalpha(int n);
int			ft_isdigit(int n);
int			ft_isalnum(int n);
int			ft_isascii(int n);
int			ft_isprint(int n);
size_t		ft_strlen(const char *str);
void		*ft_memset(void *str, int i, size_t size);
void		*ft_bzero(void *str, size_t size);
void		*ft_memcpy(void *dest, const void *src, size_t size);
void		*ft_memmove(void *dest, const void *src, size_t size);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			ft_toupper(int n);
int			ft_tolower(int n);
char		*ft_strchr(const char *str, int ch);
char		*ft_strrchr(const char *str, int ch);
void		*ft_memchr(const void *str, int ch, size_t n);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
char		*ft_strnstr(const char *str, const char *to_find, size_t len);
int			ft_atoi(const char *str);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strdup(const char *str);
void		*ft_calloc(size_t n, size_t size);
char		*ft_strjoin(char const *dest, const char *src);
char		*ft_substr(char const *str, unsigned int start, size_t len);
char		*ft_strtrim(char const *s1, char const *set);

#endif
