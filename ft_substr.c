/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:15:17 by marvin            #+#    #+#             */
/*   Updated: 2022/06/24 14:55:27 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char			*aux;
	unsigned int	i;

	i = 0;
	if (!str)
		return (NULL);
	if (start > ft_strlen(str))
		return (ft_strdup(""));
	aux = (char *)ft_calloc(sizeof(char) * (len + 1), 1);
	if (!aux)
		return (NULL);
	while (i < len)
	{
		aux[i] = str[start + i];
		i++;
	}
	return (aux);
}
