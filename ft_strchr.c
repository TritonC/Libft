/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:01:07 by marvin            #+#    #+#             */
/*   Updated: 2022/06/24 13:35:42 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	len;

	len = ft_strlen(str);
	if (ch == 0)
		return ((char *)str + (char)len);
	while (*str)
	{
		if (*str == (char)ch)
			return ((char *)str);
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char	s[] = {0, 1, 2, 3, 4, 5};
    printf("%s", ft_strchr(2));
}*/
