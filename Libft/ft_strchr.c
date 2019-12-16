/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 08:14:54 by remekram          #+#    #+#             */
/*   Updated: 2019/11/16 21:30:27 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strchr(const char *str, int c)
{
	char				*str2;
	int					k;
	unsigned char		d;

	k = 0;
	d = (unsigned char)c;
	str2 = (char *)str;
	while (str2[k] != d)
	{
		if (str2[k] == '\0')
			return (NULL);
		k++;
	}
	return (&str2[k]);
}
