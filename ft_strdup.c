/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 23:24:44 by marvin            #+#    #+#             */
/*   Updated: 2022/06/17 23:24:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
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

char *strdup(const char *str)
{
	size_t  slen;
	char *aux;

	slen = ft_strlen(str);
	aux = (char *)malloc(sizeof(char) * (slen + 1));
	if (!aux)
		return(NULL);
	ft_strcpy(aux, str);
	return (aux);
}