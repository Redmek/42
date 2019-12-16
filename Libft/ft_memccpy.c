/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 07:12:06 by remekram          #+#    #+#             */
/*   Updated: 2019/11/16 18:58:17 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	while (i < n && (i == 0 || s[i - 1] != (unsigned char)c))
	{
		d[i] = s[i];
		i++;
	}
	if (i > 0 && s[i - 1] == (unsigned char)c)
		return (d + i);
	else
		return (NULL);
}
