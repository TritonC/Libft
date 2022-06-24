/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:13:30 by marvin            #+#    #+#             */
/*   Updated: 2022/06/24 13:36:12 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = ft_strlen(str) + 1;
	while (--i >= 0)
	{
		if (str[i] == (char)ch)
			return (&((char *)str)[i]);
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
