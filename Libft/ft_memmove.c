/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 07:28:32 by remekram          #+#    #+#             */
/*   Updated: 2019/11/16 19:02:35 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char tmp[n];

	if (!dst && !src)
		return (NULL);
	if (n < 65535)
	{
		ft_memcpy(tmp, src, n);
		ft_memcpy(dst, tmp, n);
		return (dst);
	}
	return (0);
}
