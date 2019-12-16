/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 09:17:28 by remekram          #+#    #+#             */
/*   Updated: 2019/11/16 21:37:22 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char const *src, size_t dstsize)
{
	size_t	k;

	if (dest == NULL || src == NULL)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	k = 0;
	while (src[k] != '\0' && k < (dstsize - 1))
	{
		dest[k] = src[k];
		k++;
	}
	if (dstsize > 0)
		dest[k] = '\0';
	while (src[k] != '\0')
		k++;
	return (k);
}
