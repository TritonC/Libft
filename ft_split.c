/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mluis-fu <mluis-fu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:53:41 by mluis-fu          #+#    #+#             */
/*   Updated: 2022/06/21 19:46:21 by mluis-fu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	**ft_strncpy(char *dest, char *src, size_t n)
{
	unsigned int	count;

	count = 0;
	while (src[count] && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
*/
char	*ft_skip_delim(const char *str, char delimiter)
{
	size_t	len;

	len = -1;
	while (str[++len] == delimiter)
		;
	return ((char *)str + len);
}

size_t	ft_num_char_word(const char *str, const char delimiter)
{
	size_t	i;

	i = -1;
	while (str[++i] == delimiter && str[i])
		;
	return (i);
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
	while (str[++len])
		if (str[len] == delimiter && str[len + 1] != delimiter)
			index++;
	len = 0;
	//funcion delim
	str1 = ft_skip_delim(str, delimiter);
	len_word = ft_num_char_word(str1, delimiter);
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
