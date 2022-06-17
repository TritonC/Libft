/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 12:54:05 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/15 14:35:47 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	ft_isdigit(int n)
{
	int	value;

	value = 0;
	if (n >= 48 && n <= 57)
		value = 1;
	return (value);
}
/*
#include <stdio.h>
int main()
{
	printf("%d",ft_isdigit('s'));
}*/