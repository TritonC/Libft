/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 23:19:15 by marvin            #+#    #+#             */
/*   Updated: 2022/06/17 23:19:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t n, size_t size)
{
	void    *aux;
	aux = malloc(n * size);
	if (aux == NULL)
		return (aux);
	ft_bzero(aux, size * n);
	return (aux);
}