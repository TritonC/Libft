/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:15:17 by marvin            #+#    #+#             */
/*   Updated: 2022/06/20 11:10:51 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*aux;

	aux = (char *)malloc(sizeof(char) * len);
	if (!aux)
		return (NULL);
	while (*str)
	{
		if (*str == (char)start)
		{
			aux = (char *)str;
			return (aux);
		}
		str++;
	}
	return (0);
}
