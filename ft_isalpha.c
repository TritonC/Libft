/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 11:55:39 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/13 11:57:14 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	int	i;
	int	count;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
			count = 1;
		else
			return (0);
		i++;
	}
	return (count);
}
/*
#include<stdio.h>
int main(void)
{
	printf("%d",ft_str_is_alpha(""));
}*/
