/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 09:24:45 by remekram          #+#    #+#             */
/*   Updated: 2019/11/20 15:47:24 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*list;

	if (!lst)
		return (NULL);
	if (!(new = ft_lstnew((f(lst->content)))))
		return (NULL);
	list = new;
	while (lst)
	{
		if (lst->next)
		{
			if (!(new->next = ft_lstnew(f(lst->next->content))))
			{
				ft_lstclear(&list, del);
				return (0);
			}
			new = new->next;
		}
		lst = lst->next;
	}
	new->next = NULL;
	return (list);
}
