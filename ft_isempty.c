/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isempty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feedme <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 00:02:47 by feedme            #+#    #+#             */
/*   Updated: 2018/12/10 00:06:19 by feedme           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isempty(char *line)
{
	int		i;

	i = 0;
	while (line[i] && !ft_isprint(line[i]))
		i++;
	if (!line[i])
		return (1);
	else
		return (0);
}
