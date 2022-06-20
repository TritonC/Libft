/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:13:30 by marvin            #+#    #+#             */
/*   Updated: 2022/06/17 18:53:29 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	while (*str)
		str++;
	while (*str - 1)
	{
		if (*str == (char)ch)
			return ((char *)str);
		str--;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	const char	test[] = "hola una mas mundo";
	int		ch = 'u';
	printf("%s", ft_strrchr(test, ch));
}*/
