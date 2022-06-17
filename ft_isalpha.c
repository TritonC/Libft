/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:55:39 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/17 12:58:39 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int n)
{
	return((n >= 97 && n <= 122) || (n >= 65 && n <= 90))
}
/*
#include<stdio.h>
int main(void)
{
	printf("%d",ft_str_is_alpha(""));
}*/
