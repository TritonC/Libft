/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:16:30 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/28 13:06:53 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[count] || ((unsigned char *)s2)[count])
	{
		if (n > count && (((unsigned char *)s1)[count]
			!= ((unsigned char *)s2)[count]))
			return (((unsigned char *)s1)[count]
			- ((unsigned char *)s2)[count]);
		count++;
	}
	return (0);
}
