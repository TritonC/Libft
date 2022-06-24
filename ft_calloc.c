/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 23:19:15 by marvin            #+#    #+#             */
/*   Updated: 2022/06/24 13:34:44 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*aux;
	size_t	sum;

	sum = size * n;
	if (sum < n && sum < size)
		return (NULL);
	aux = malloc(n * size);
	if (aux == (void *)0)
		return (NULL);
	ft_bzero(aux, sum);
	return (aux);
}
