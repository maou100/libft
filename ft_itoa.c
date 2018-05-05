/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feedme <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 19:23:47 by feedme            #+#    #+#             */
/*   Updated: 2018/04/30 20:14:53 by feedme           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_spacecount(int n)
{
	unsigned int	count;

	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char				*ft_itoa(int n)
{
	char			*str;
	unsigned int	i;

	if ((str = (char *)malloc(ft_spacecount(n) + 1)) == NULL)
		return (NULL);
	i = ft_spacecount(n) - 1;
	str[ft_spacecount(n)] = '\0';
	if (n <= 0)
	{
		if (n == 0)
		{
			str[0] = '0';
			return (str);
		}
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	return (str);
}
