/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 08:57:43 by remekram          #+#    #+#             */
/*   Updated: 2019/11/12 09:14:34 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *res;

	res = (char *)s + ft_strlen(s);
	while (*res != c)
	{
		if (res == s)
			return (NULL);
		res--;
	}
	return (res);
}
