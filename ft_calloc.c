/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 23:19:15 by marvin            #+#    #+#             */
/*   Updated: 2022/06/20 11:06:13 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*aux;
	size_t	sum;

	sum = size * n;
	if (!sum || (sum < n && sum < size))
		return (NULL);
	aux = malloc(n * size);
	if (aux == NULL)
		return (aux);
	ft_bzero(aux, (size * n));
	return (aux);
}
