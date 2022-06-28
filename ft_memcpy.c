/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:20:15 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/28 13:06:19 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t			count;
	char			*destcpy;
	const char		*srccpy;

	destcpy = dest;
	srccpy = src;
	if (dest == src)
		return (dest);
	count = 0;
	while (count < size)
	{
		destcpy[count] = srccpy[count];
		count++;
	}
	return (dest);
}
