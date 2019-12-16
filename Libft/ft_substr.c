/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 07:42:02 by remekram          #+#    #+#             */
/*   Updated: 2019/11/21 08:14:28 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		k;
	char		*d;

	k = 0;
	if (!s)
		return (NULL);
	if (!(d = (char *)malloc(sizeof(*d) * (len + 1))))
		return (NULL);
	if (start > ft_strlen(s))
	{
		d[k] = '\0';
		return (d);
	}
	while ((s[start] != '\0') && (k < len))
	{
		d[k] = s[start];
		k++;
		start++;
	}
	d[k] = '\0';
	return (d);
}
