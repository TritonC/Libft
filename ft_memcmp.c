/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:26:49 by marvin            #+#    #+#             */
/*   Updated: 2022/06/16 17:26:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t count;

    count = 0;
    while (count++ < n)
    {
        if (((unsigned char *)str1)[count] != ((unsigned char *) str2)[count])
            return (((unsigned char *)str1)[count] - ((unsigned char *) str2)[count]);
    }
    return (0);
}
/*
int main()
{
    const char test[] = "somos iguales";
    const char test2[] = "sOmos iguales";
    printf("mi desastre: %d\n", ft_memcmp(test, test2, 14));
    printf("funcion original: %d", memcmp(test, test2, 14));
}*/