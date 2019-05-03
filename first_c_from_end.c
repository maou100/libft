/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_c_from_end.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feedme <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 20:39:46 by feedme            #+#    #+#             */
/*   Updated: 2019/04/28 18:06:44 by feedme           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_first_c_from_end(char *str, char c)
{
	int		len;

	len = ft_strlen(str);
	while (--len > -1)
	{
		if (str[len] == c)
			return (len);
	}
	return (-1);
}
