/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feedme <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 17:00:49 by feedme            #+#    #+#             */
/*   Updated: 2019/05/01 17:08:53 by feedme           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memjoin(char const *s1, char const *s2, unsigned int len1, unsigned int len2)
{
	char			*fusion;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if ((fusion = (char *)malloc(len1 + len2 + 1)) == NULL)
		return (NULL);
	while (i < len1)
	{
		fusion[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		fusion[i + j] = s2[j];
		j++;
	}
	fusion[i + j] = '\0';
	return (fusion);
}
