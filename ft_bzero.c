/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:49:23 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/28 13:07:53 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_bzero(void *str, size_t size)
{
	size_t	count;
	char	*copy;

	copy = str;
	count = 0;
	while (count < size)
	{
		copy[count] = '\0';
		count++;
	}
	return (str);
}
