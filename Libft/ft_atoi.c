/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 17:07:23 by remekram          #+#    #+#             */
/*   Updated: 2019/11/16 20:40:55 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int k;
	int m;
	int nb;

	k = 0;
	m = 1;
	nb = 0;
	while ((str[k]) && (str[k] == '\t' || str[k] == '\n' || str[k] == '\r'
			|| str[k] == '\v' || str[k] == '\f' || str[k] == 32))
		k++;
	if (str[k] == '-')
		m = (-1);
	if (str[k] == '-' || str[k] == '+')
		k++;
	while (str[k] >= '0' && str[k] <= '9')
	{
		nb = nb * 10 + (str[k] - '0');
		k++;
	}
	nb = nb * m;
	return (nb);
}
