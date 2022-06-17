/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:31:08 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/15 16:42:11 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int i, size_t size)
{
	size_t	count;
	char	*copy;

	copy = str;
	count = 0;
	while (count < size)
	{
		copy[count] = i;
		count++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char    str[50] = "hola sr ricardo";
	printf("%s\n", ft_memset(str, '$', 7));
	printf("%s", memset(str, '$', 7));
}*/
