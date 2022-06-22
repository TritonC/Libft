/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:53:41 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/22 14:35:08 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//function to calculate the size of the string, without the delimiters to allocate size
size_t	static	str_size(const char *str, char delimiter)
{
	size_t	len;
	size_t	word;

	word = 0;
	len = 0;
	while(str && str[len])
	{
		if(str[len] != delimiter)
		{
			word++;
			while (str[len] != delimiter && str[len])
				len++;
			else
				len++;
		}
	}
	return (word);
}
//function to calculate the size of the len in substr
static size_t	size_str_index(const char *str, char delimiter, int len)
{
	size_t	size;

	size = 0;
	while (str[i] != delimiter && str[i])
	{
		size++;
		i++;
	}
	return (size);
}

char	**ft_split(const char *str, char delimiter)
{
	size_t	len;
	size_t	index;
	char	**split;
	char	*str1;
	size_t	len_word;

	index = 0;
	len = -1;
	len = 0;

	len_word = str_size(str, delimiter);
	if (!split1 = (char **)malloc (sizeof(char *) * (len_word + 1));
		return (NULL);
	word = (char *)malloc (sizeof(char) len_word + 1);
	split = (char **)malloc((index + 2) * sizeof(char *));
	//revisar la asignacion del malloc
	return (split);
}

int	main(void)
{
	//char	*str = "      split       this for   me  !";
	//char	**result = ft_split(str, ' ');
	char	**r = ft_split(",,,,,a,,,,,,,", ',');
	
	//int i = -1;
	//while (r[++i])
		printf("%s\n", r[0]);
	//free(r);
}

/*
size_t	len;
	size_t	ini;
	size_t	pos;
	size_t	index;
	char	**split;

	index = 0;
	len = -1;
	pos = -1;
	ini = 0;

	if (*str == '\0')
		return (NULL);
	while (str[++len])
		if (str[len] == delimiter && str[len + 1] != delimiter)
			index++;
	len = 0;
	while (str[len] == delimiter)
	{
		len++;
		ini++;
		pos++;
	}
	len--;
	split = malloc((index + 2) * sizeof(char *));
	//revisar la asignacion del malloc
	index = 0;
	while (str[++len] || len == ft_strlen(str))
	{
		if ((len && len == pos) || (str[len - 1] == delimiter && str[len] == delimiter))
		{
			ini++;
			pos++;
		}
		else if ((str[len - 1] != delimiter && str[len] == delimiter) || len == ft_strlen(str))
		{
			split[index++] = ft_strdup(ft_substr((char *)str, ini, (len - pos) - 1));
			ini = len + 1;
			pos = len;
		}
		//else if (str[len - 1] != delimiter && str[len] == delimiter)

	}
	split[index] = NULL;
	return (split);
*/
