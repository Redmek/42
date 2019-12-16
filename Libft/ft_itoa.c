/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 09:44:52 by remekram          #+#    #+#             */
/*   Updated: 2019/11/21 08:32:16 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_digit(int n)
{
	int c;

	c = 0;
	if (n <= 0)
	{
		c++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int nbr)
{
	int			k;
	int			c;
	char		*nb;
	long int	n;

	n = nbr;
	c = count_digit(n);
	k = 1;
	if (!(nb = (char*)malloc(sizeof(char) * (c + 1))))
		return (NULL);
	if (n < 0)
	{
		nb[0] = '-';
		n = -n;
	}
	if (n == 0)
		nb[0] = 48;
	while (n != 0)
	{
		nb[c - k] = n % 10 + 48;
		n = n / 10;
		k++;
	}
	nb[c] = '\0';
	return (nb);
}
