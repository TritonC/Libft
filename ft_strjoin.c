/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:38:54 by marvin            #+#    #+#             */
/*   Updated: 2022/06/18 15:38:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *dest, char const *src)
{
	size_t	i;
	size_t j;
	char *aux;

	i = 0;
	j = 0;
	j = ft_strlen(dest);
	aux = (char *)malloc(sizeof(char) * (j + 1));
	if (!aux)
		return(NULL);
	aux = dest;
	while (src[j])
	{
		((char *)aux)[i] = ((char* )src)[j];
		i++;
		j++;
	}
	((char *)aux)[i] = '\0';
	return (aux);
}