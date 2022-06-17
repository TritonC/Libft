/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:13:30 by marvin            #+#    #+#             */
/*   Updated: 2022/06/16 16:13:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *str, int ch)
{
	while (*str)
		str++;
	while (*str - 1)
	{
		if (*str == ch)
			return ((unsigned char*) str);
		str --;
	}
	return ('\0');
}
/*
#include <stdio.h>
int main()
{
	const char	test[] = "hola una mas mundo";
	int		ch = 'u';
	printf("%s", ft_strrchr(test, ch));
}*/