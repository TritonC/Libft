/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:09:22 by marvin            #+#    #+#             */
/*   Updated: 2022/06/16 17:09:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void *ft_memchr(const void *str, int ch, size_t n)
{
    int  count;
    const char *copy;

    copy = str;
    count = 0;
    while (count < n)
    {
        if (*copy == ch)
            return ((const char *) copy);
        copy++;
        count++;
    }
    return ('\0');
}
/*
int main()
{
	const char	test[] = "hola una mas mundo";
	int		ch = 'u';
	printf("%s", ft_memchr(test, ch, 7));
}*/