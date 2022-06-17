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
	void    *ptr;
	ptr = malloc(n * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * n);
	return (ptr);
}