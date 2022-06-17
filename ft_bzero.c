/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 14:49:23 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/17 16:32:55 by mluis-fu         ###   ########.fr       */
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
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char	zero[50] = "ricardo le gusta la pija";
	ft_bzero(zero, 5);
	printf("%s", zero);
	printf("%s", bzero(zero, 5));
}*/
