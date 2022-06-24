/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:46:55 by marvin            #+#    #+#             */
/*   Updated: 2022/06/24 13:02:36 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*dinamic_str(size_t size)
{
	int		count;
	char	*str;

	count = 0;
	str = (char *)ft_calloc(sizeof(char) * (size + 1), 1);
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		count;

	if (!s || !f)
		return (NULL);
	count = 0;
	str = dinamic_str(ft_strlen(s));
	if (!str)
		return (NULL);
	while (s[count])
	{
		str[count] = f(count, s[count]);
		count++;
	}
	return (str);
}
/*
char test (unsigned int i, char c)
{	
	i = 0;
	if (c == ' ')
		return ('_');
	return (c);
}
int main()
{
	char test2[] = "como estas tu?"; // como_estas_tu
	char *test1;
	test1 = ft_strmapi(test2, test);
	printf("%s", test1);
}*/
