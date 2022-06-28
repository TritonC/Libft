/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:26:49 by marvin            #+#    #+#             */
/*   Updated: 2022/06/28 13:09:44 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		if (((unsigned char *)str1)[count] != ((unsigned char *) str2)[count])
			return (((unsigned char *)str1)[count]
					- ((unsigned char *) str2)[count]);
		count++;
	}
	return (0);
}
