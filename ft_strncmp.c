/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:16:30 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/05/29 01:05:47 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (0);
	while (s1[count] || s2[count])
	{
		if (n > count && (s1[count] != s2[count]))
			return (s1[count] - s2[count]);
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
