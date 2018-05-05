/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feedme <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 19:48:13 by feedme            #+#    #+#             */
/*   Updated: 2018/04/30 19:58:40 by feedme           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	beginning;
	unsigned int	end;
	char			*trimmed;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	beginning = i;
	while (s[i + 1])
		i++;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	i++;
	end = i;
	if ((trimmed = (char *)malloc((end - beginning) + 1)) == NULL)
		return (NULL);
	i = -1;
	while (beginning <= end)
	{
		trimmed[++i] = s[beginning];
		beginning++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
