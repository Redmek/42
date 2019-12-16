/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 08:01:21 by remekram          #+#    #+#             */
/*   Updated: 2019/11/23 20:18:07 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		k;
	char	*d;
	int		i;

	if ((!s1) || (!s2))
		return (NULL);
	k = 0;
	i = 0;
	if ((!(d = (char *)malloc((sizeof(char) *
		(ft_strlen(s1) + ft_strlen(s2) + 1))))))
		return (NULL);
	while (s1[k])
	{
		d[k] = s1[k];
		k++;
	}
	while (s2[i])
	{
		d[k] = s2[i];
		i++;
		k++;
	}
	d[k] = '\0';
	return (d);
}
