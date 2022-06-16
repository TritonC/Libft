/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 16:01:07 by marvin            #+#    #+#             */
/*   Updated: 2022/06/16 16:01:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *str, int ch)
{
    while (*str)
    {
        if (*str == ch)
            return ((unsigned char *) str);
        str++;
    }
    return ('\0');
}
/*
#include <stdio.h>
int main()
{
    printf("%s", ft_strchr("prueba . esto deberia salir ", '2'));
}*/