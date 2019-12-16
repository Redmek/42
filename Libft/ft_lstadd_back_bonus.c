/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 08:02:27 by remekram          #+#    #+#             */
/*   Updated: 2019/11/19 09:46:09 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (alst && (*alst) && new)
	{
		while ((*alst)->next)
			(*alst) = (*alst)->next;
		(*alst)->next = new;
	}
	if ((*alst) == NULL && new)
		(*alst) = new;
}
