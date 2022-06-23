/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:46:55 by marvin            #+#    #+#             */
/*   Updated: 2022/06/23 15:46:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *dinamic_str(size_t size)
{
	char    *str;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	while (size >= 0)
	{
		str[(int) size] = '\0';
		size--;
	}
	return (str);
}
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char    *str;
	int     count;

	count = 0;
	if (!s || !f)
		return (NULL);
	str = dinamic_str(ft_strlen(s));
	if (!str)
		return (NULL);
	while(s[count])
	{
		str[count] = f(count, s[count]);
		count++;
	}
	str[count] = '\0';
	return (str);
}