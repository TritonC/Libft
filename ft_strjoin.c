/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:38:54 by marvin            #+#    #+#             */
/*   Updated: 2022/06/24 13:30:39 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *dest, char const *src)
{
	size_t	i;
	size_t	j;
	char	*aux;
	size_t	len;

	i = 0;
	j = 0;
	if (!dest || !src)
		return (NULL);
	len = ft_strlen(dest) + ft_strlen(src);
	aux = (char *)malloc(sizeof(char) * (len + 1));
	if (!aux)
		return (NULL);
	while (dest[i])
	{
		aux[i] = dest[i];
		i++;
	}
	while (src[j])
	{
		aux[i + j] = src[j];
		j++;
	}
	aux[i + j] = '\0';
	return (aux);
}
