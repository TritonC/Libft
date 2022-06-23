/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 15:46:55 by marvin            #+#    #+#             */
/*   Updated: 2022/06/23 15:46:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *dinamic_str(size_t size)
{
    int     count;
    char    *str;
    count = 0;
    str = (char *)malloc(sizeof(char) * (size + 1));
    if (!str)
        return (NULL);
    while (size)
	{
        str[size] = '\0';
		size--;
	}
    return (str);
}
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  slen;
    char    *str;
    int     count;
    if (!s || !f)
        return (NULL);
    count = 0;
    slen = ft_strlen(s);
    str = dinamic_str(slen);
    if (!str)
        return (NULL);
    while(s[count])
    {
        str[count] = f(count, s[count]);
        count++;
    }
    str[count] = '\0';
    return (str);
}