/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 01:12:30 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/27 17:41:03 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;
	size_t	destlen;

	i = 0;
	srclen = ft_strlen((char *)src);
	destlen = ft_strlen(dest);
	if (size == 0)
		return (srclen);
	if (destlen > size)
		return (srclen + size);
	while (((unsigned char *)src)[i] && destlen + i < (size - 1))
	{
		dest[i + destlen] = ((unsigned char *)src)[i];
		i++;
	}
	if (i < size)
		dest[destlen + i] = '\0';
	return (destlen + srclen);
}
