/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 07:40:12 by remekram          #+#    #+#             */
/*   Updated: 2019/11/16 18:58:40 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*src;

	i = 0;
	src = s;
	while (i < (unsigned char)n)
	{
		if (src[i] == (char)c)
			return ((void*)src + i);
		else
			i++;
	}
	return (NULL);
}
