/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 22:12:19 by marvin            #+#    #+#             */
/*   Updated: 2022/06/24 22:12:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *lst;

	(lst = malloc(sizeof(t_list)));
    if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (new);
}
