/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feedme <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 16:21:05 by feedme            #+#    #+#             */
/*   Updated: 2018/04/24 19:24:48 by feedme           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*fusion;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	fusion = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (fusion == NULL)
		return (NULL);
	while (s1[i])
	{
		fusion[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		fusion[i + j] = s2[j];
		j++;
	}
	fusion[i + j] = '\0';
	return (fusion);
}
