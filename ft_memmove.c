/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:05:23 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/28 13:06:23 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t		count;
	char		*destcpy;
	const char	*srccpy;

	destcpy = dest;
	srccpy = src;
	if (dest == src)
		return (dest);
	count = 0;
	if (dest < src)
	{
		while (count < size)
		{
			destcpy[count] = srccpy[count];
			count++;
		}
	}
	if (dest > src)
	{
		while (size--)
		destcpy[size] = srccpy[size];
	}
	return (dest);
}
