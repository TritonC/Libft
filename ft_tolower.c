/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:56:06 by marvin            #+#    #+#             */
/*   Updated: 2022/06/24 13:36:20 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int n)
{
	if (n >= 'A' && n <= 'Z')
		n += 32;
	return (n);
}
/*
#include <stdio.h>
int main()
{
	printf("%c", ft_tolower('D'));
	printf("%c", ft_tolower('9'));
	printf("%c", ft_tolower('a'));
}*/
