/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 17:35:36 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/24 13:35:08 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(long long int n, int *count, char *str)
{
	long long int	nb;

	nb = n;
	if (nb < 0)
	{
		str[*count] = '-';
		nb *= -1;
		count[0]++;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, count, str);
		ft_putnbr(nb % 10, count, str);
	}
	else if (nb < 10)
	{
		str[*count] = nb + '0';
		count[0]++;
	}
}

static size_t	int_to_strlen(int n)
{
	long long int	nbr;
	long long int	count;

	nbr = n;
	count = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr / 10)
	{
		nbr /= 10;
		count++;
	}
	return ((size_t)++count);
}

char	*ft_itoa(int n)
{
	long long int	z;
	char			*str;
	size_t			len;
	int				nbr;

	nbr = 0;
	z = n;
	len = int_to_strlen(z);
	str = ft_calloc(len + 1, 1);
	if (!str)
		return (NULL);
	ft_putnbr(z, &nbr, str);
	return (str);
}
