/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 23:24:44 by marvin            #+#    #+#             */
/*   Updated: 2022/06/17 23:24:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(const char *str)
{
	size_t  slen;
	char *aux;

	slen = ft_strlen(str);
	aux = (char *)malloc(sizeof(char) * (slen + 1));
	if (!aux)
		return(NULL);
	ft_memcpy(aux, str, slen - 1);
	return (aux);
}