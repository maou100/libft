/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feedme <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 18:59:02 by feedme            #+#    #+#             */
/*   Updated: 2018/05/03 01:32:20 by feedme           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;

	while (lst)
	{
		if ((list = (t_list *)malloc(sizeof(t_list))) == NULL)
			return (NULL);
		list = f(lst);
		lst = lst->next;
		list = list->next;
	}
	free(lst);
	return (list);
}
