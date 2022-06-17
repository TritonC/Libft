/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:13:33 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/17 18:06:22 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		i;
	int		j;
	int		sign;
	char	*copy;

	copy = (char *)str;
	i = 0;
	j = 0;
	sign = 1;
	while (copy[i] == 32 || (copy[i] >= 9 && copy[i] <= 13))
		i++;
	if (copy[i] == '+')
		i++;
	else if (copy[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (copy[i] >= '0' && copy[i] <= '9')
	{
		j = (copy[i] - 48) + (j * 10);
		i++;
	}
	return (j * sign);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_atoi("   +1"));
}*/
