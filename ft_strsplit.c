/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feedme <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 13:00:09 by feedme            #+#    #+#             */
/*   Updated: 2018/05/04 15:24:27 by feedme           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int		ft_counts_words(char const *s, char c)
{
	unsigned int	count;
	unsigned int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
			if (s[i + 1] == c || s[i + 1] == '\0')
				count++;
		i++;
	}
	return (count);
}

static char				*ft_putword(char const *s, char c, unsigned int i)
{
	char			*tmp;
	unsigned int	size;
	unsigned int	i0;
	unsigned int	x;

	x = 0;
	size = 0;
	i0 = i;
	while (s[i] != c)
	{
		i++;
		size++;
	}
	if ((tmp = (char *)malloc(size + 1)) == NULL)
		return (NULL);
	while (i0 != i)
	{
		tmp[x] = s[i0];
		x++;
		i0++;
	}
	tmp[x] = '\0';
	return (tmp);
}

char					**ft_strsplit(char const *s, char c)
{
	char			**array;
	unsigned int	i;
	unsigned int	j;
	unsigned int	word_count;

	j = 0;
	i = 0;
	word_count = ft_counts_words(s, c);
	if ((array = (char **)malloc(word_count + 1)) == NULL)
		return (NULL);
	array[word_count] = NULL;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			array[j] = ft_putword(s, c, i);
			j++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (array);
}

int	main(void)
{
	char **matrix;
	unsigned int i = 0;
	char *s = "split  ||this|for|me|||||!|";
	char c = '|';
	matrix = ft_strsplit(s, c);
	while (matrix[i] != NULL)
	{
		printf("%s", matrix[i]);
		i++;
	}
	return (0);
}
