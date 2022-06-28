/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:53:41 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/28 15:24:17 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//function to calculate the size of the string, without the delimiters
// to allocate size

size_t	static	str_index_size(const char *str, char delimiter)
{
	size_t	len;
	size_t	word;

	word = 0;
	len = 0;
	while (str && str[len])
	{
		if (str[len] != delimiter)
		{
			word++;
			while (str[len] != delimiter && str[len])
				len++;
		}
		else
			len++;
	}
	return (word);
}
//function to calculate the size of the len in substr

static size_t	size_words(const char *str, char delimiter, int len)
{
	size_t	size;

	size = 0;
	while (str[len] != delimiter && str[len])
	{
		size++;
		len++;
	}
	return (size);
}

void	ft_free(char **str, int i)
{
	while (i-- > 0)
		free (str);
	free (str);
	str = NULL;
}

char	**ft_split(const char *str, char delimiter)
{
	char	**split;
	size_t	index;
	size_t	size_copy;
	size_t	count;
	size_t	len_str;

	index = -1;
	count = 0;
	len_str = str_index_size(str, delimiter);
	split = (char **)ft_calloc (sizeof(char *) * (len_str + 1), 1);
	if (!split)
		return (NULL);
	while (++index < len_str)
	{
		while (str[count] == delimiter)
			count++;
		size_copy = size_words(str, delimiter, count);
		split[index] = ft_substr(str, count, size_copy);
		if (!split[index])
			ft_free (split, index);
		count += size_copy;
	}
	return (split);
}
