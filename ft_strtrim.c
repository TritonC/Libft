/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:55:01 by marvin            #+#    #+#             */
/*   Updated: 2022/06/18 15:55:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static char ft_isspace(char *str) 
{                   //copy of the isspace function to remove spaces
	size_t i;
	
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	i++;
}

char *ft_strtrim(char const *s1, char const *set)