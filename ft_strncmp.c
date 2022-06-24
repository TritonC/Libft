/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:16:30 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/24 13:36:05 by mluis-fu         ###   ########.fr       */
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
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char a[] = "noasdnjdafsnkdfmkl'dfasm486468";
	char b[] = "asdasdas";
	int	c = strncmp(a, b, 0);
	int d = ft_strncmp(a, b, 0);

	printf("funcion original: %d. \n", c);
	printf("Mi funcion: %d. \n", d);
}*/
