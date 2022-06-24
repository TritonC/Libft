/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 18:55:37 by marvin            #+#    #+#             */
/*   Updated: 2022/06/24 13:36:08 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char	*str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (to_find[0] == '\0')
		return ((char *)str);
	j = 0;
	while (j < len && str[j])
	{
		i = 0;
		while (j < len && to_find[i] && str[j] && to_find[i] == str[j])
		{
			i++;
			j++;
		}
		if (to_find[i] == '\0')
			return (&((char *)str)[j - i]);
		j = j - i + 1;
	}
	return (0);
}
