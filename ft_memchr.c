/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:09:22 by marvin            #+#    #+#             */
/*   Updated: 2022/06/17 18:00:04 by mluis-fu         ###   ########.fr       */
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
	while (count < n)
	{
		if (*copy == (unsigned char) ch)
			return (copy);
		copy++;
		count++;
	}
	return (NULL);
}
/*
int main()
{
	char	s[] = {0, 1, 2, 3, 4, 5};
	printf("%d\n", (int) ft_memchr(s, 2, 3));
	printf("%d", (int) ft_memchr(s, 2 + 256, 3));
}*/
