/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 12:33:38 by remekram          #+#    #+#             */
/*   Updated: 2019/11/16 21:37:02 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	char			*d;

	i = 0;
	d = (char *)b;
	while (i < len)
	{
		d[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
