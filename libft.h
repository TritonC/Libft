#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <string.h>
# include <stdio.h>

int	ft_isalpha(int n);
int	ft_isdigit(int n);
int ft_isalnum(int n);
int	ft_isascii(int n);
int	ft_isprint(int n);
int	ft_strlen(const char *str);
void	*ft_memset(void *str, int i, size_t size);
void	*ft_bzero(void *str, size_t size);
