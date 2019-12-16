/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 09:01:53 by remekram          #+#    #+#             */
/*   Updated: 2019/11/20 15:38:27 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*temp;

	if (!lst)
		return ;
	list = *lst;
	while (list != NULL)
	{
		temp = list;
		ft_lstdelone(temp, del);
		list = list->next;
	}
	*lst = NULL;
}
