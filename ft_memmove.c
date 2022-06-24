/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:05:23 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/24 13:35:20 by mluis-fu         ###   ########.fr       */
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
/*
#include <string.h>
#include <stdio.h>

int main()
{
	char	*dest;// = " need this, real quick";
	char	src[80] = "0123456789abcdefghijkljjdsfnkjsdafnksdfnjsdnfks";
	dest = &src[0] + 4;
	//char	dest2[50];
	//char	src2[50] = " http://www.tutorialspoint.com ";
	printf("my disaster do this: %s\n", ft_memmove(dest, src, 70));
	//printf ("original function: %s\n", memcpy(dest2, src2, 30));
}
*/
