/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:15:17 by marvin            #+#    #+#             */
/*   Updated: 2022/06/20 17:23:15 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char			*aux;
	size_t			slen;
	unsigned int	i;

	i = 0;
	slen = ft_strlen(str);
	if (start > slen)
		return (ft_strdup(""));
	aux = (char *)malloc(sizeof(char) * len + 1);
	if (!aux)
		return (NULL);
	while (i < len)
	{
		aux[i] = str[start + i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}
