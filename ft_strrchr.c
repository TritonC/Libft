/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:13:30 by marvin            #+#    #+#             */
/*   Updated: 2022/06/20 12:55:16 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == ch)
			return (&((char *)str)[i]);
		i--;
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
