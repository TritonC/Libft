/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 17:02:12 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/24 17:07:03 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*alt;

	alt = (t_list *)malloc(sizeof(*alt));
	if (!alt)
		return (NULL);
	alt->content = content;
	alt->next = NULL;
	return (alt);
}
