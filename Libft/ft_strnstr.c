/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 09:42:20 by remekram          #+#    #+#             */
/*   Updated: 2019/11/16 20:33:38 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;

	if (*needle == '\0')
		return ((char *)haystack);
	n = ft_strlen(needle);
	while (*haystack != '\0' && n <= len--)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, n) == 0)
			return ((char *)haystack);
		else
			haystack++;
	}
	return (NULL);
}
