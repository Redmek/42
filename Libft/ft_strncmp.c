/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:36:44 by remekram          #+#    #+#             */
/*   Updated: 2019/11/12 09:16:46 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	k;

	k = 0;
	while (*(s1 + k) && *(s1 + k) == *(s2 + k) && (k < n - 1))
		k++;
	if (n > 0)
		return (*((unsigned char *)s1 + k) - *((unsigned char *)s2 + k));
	return (0);
}
