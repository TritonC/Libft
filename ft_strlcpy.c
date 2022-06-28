/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:14:10 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/28 13:06:43 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = 0;
	while (((unsigned char *)src)[length])
		length++;
	if (size > 0)
	{
		while (((unsigned char *)src)[i] && (i < (size - 1)))
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	dest[i] = '\0';
	}
	return (length);
}
