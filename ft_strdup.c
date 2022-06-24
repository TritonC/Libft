/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 23:24:44 by marvin            #+#    #+#             */
/*   Updated: 2022/06/24 13:35:45 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

char	*ft_strdup(const char *str)
{
	size_t	slen;
	char	*aux;

	slen = ft_strlen(str);
	aux = (char *)malloc(sizeof(char) * (slen + 1));
	if (!aux)
		return (NULL);
	ft_strcpy(aux, (char *)str);
	return (aux);
}
