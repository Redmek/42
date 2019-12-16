/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 13:21:35 by remekram          #+#    #+#             */
/*   Updated: 2019/11/16 20:42:07 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*src;

	i = 0;
	dest = (char *)str1;
	src = (const char *)str2;
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
