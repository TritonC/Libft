/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:55:01 by marvin            #+#    #+#             */
/*   Updated: 2022/06/28 13:16:45 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *str, const char *set)
{
	size_t		s1len;
	char		*aux;

	if (str == 0 || set == 0)
		return (NULL);
	while (*str && ft_strchr(set, *str))
		str++;
	s1len = ft_strlen(str);
	while (s1len && ft_strchr(set, str[s1len]))
		s1len--;
	aux = ft_substr((char *)str, 0, s1len + 1);
	return (aux);
}
