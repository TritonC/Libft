/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:14:10 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/05/26 12:40:13 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				length;

	i = 0;
	length = 0;
	while (src[length])
		length++;
	if (size > 0)
	{
		while (src[i] && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	}
	return (length);
}
/*int main(void)
{
	char	src[] = "hola42";
	char	dest[] = "adios42222";
	printf("%d", ft_strlcpy(dest, src, 5));
	printf("%s", dest);
}*/
