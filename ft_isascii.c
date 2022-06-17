/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:48:31 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/17 12:52:58 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int n)
{
	return ((n >= 0 && n <= 127));
}
/*
#include <stdio.h>
int main()
{
	printf("%d", ft_isascii());
}*/
