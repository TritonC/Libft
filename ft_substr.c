/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:15:17 by marvin            #+#    #+#             */
/*   Updated: 2022/06/18 15:15:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *str, unsigned int start, size_t len)
{
    char *aux;

    aux = (char *)malloc(sizeof(char) * len);
    while(*str)
    {
        if (*str == (char)start)
        {
            aux = str;
            return (aux);
        }
        str++;
    }
    return (0);
}