/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:13:33 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/28 13:07:59 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long int	ft_nbr(char *str)
{
	unsigned long int	j;
	int					i;

	j = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = (str[i] - 48) + (j * 10);
		i++;
	}
	return (j);
}

static char	*ft_isspace(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	return (&str[i]);
}

static void	*ft_sign(char *str, int *sign)
{
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		*sign *= -1;
		str++;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	int						sign;
	char					*copy;
	unsigned long int		j;

	sign = 1;
	copy = ft_isspace((char *)str);
	copy = ft_sign(copy, &sign);
	j = ft_nbr(copy);
	if (j > 9223372036854775807 && sign == 1)
		return (-1);
	else if (j > 9223372036854775807 && sign == -1)
		return (0);
	return (j * sign);
}
