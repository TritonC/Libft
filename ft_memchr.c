/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:09:22 by marvin            #+#    #+#             */
/*   Updated: 2022/07/07 11:31:53 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(const void *str, int ch, size_t n)
{
	size_t			count;
	unsigned char	*copy;

	copy = (unsigned char *)str;
	count = 0;
	while (count < n && n > 0)
	{
		if (*copy == (unsigned char) ch)
			return (copy);
		copy++;
		count++;
	}
	return (NULL);
}
