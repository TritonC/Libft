/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 14:33:02 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/07/07 16:35:30 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*newpointer;

	newpointer = *lst;
	if (newpointer == NULL)
		return ;
	while (newpointer)
	{
		del (newpointer->content);
		free (newpointer);
		newpointer = newpointer->next;
	}
	*lst = NULL;
}
