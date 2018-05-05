/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feedme <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 20:55:57 by feedme            #+#    #+#             */
/*   Updated: 2018/04/26 15:51:30 by feedme           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	if (c1[0] == '\0' && c2[0] == '\0')
		return (0);
	if (c1[0] == '\0')
		return (-1);
	if (c2[0] == '\0')
		return (1);
	while (c1[i] == c2[i] && c1[i] != '\0' && i < n)
		i++;
	return (c1[i] - c2[i]);
}
