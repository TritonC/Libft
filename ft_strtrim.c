/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:55:01 by marvin            #+#    #+#             */
/*   Updated: 2022/06/20 18:38:54 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	count_src;
	int	limit;

	count_src = 0;
	count = 0;
	limit = 0;
	while (to_find[limit])
		limit++;
	if (limit == '\0')
		return (str);
	while (str[count])
	{
		if (str[count] == to_find[count_src])
			count_src++;
		else if (str[count] != to_find[count_src])
			count_src = 0;
		if (count_src == limit)
			return (&str[count - (limit - 1)]);
		count++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	char	*aux;
	int		j;

	j = 0;
	len = ft_strlen(s1);
	aux = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;

	if (ft_strstr(s1, set))
	{
	}
	return (aux);
}
