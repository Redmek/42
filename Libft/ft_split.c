/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: remekram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 09:09:26 by remekram          #+#    #+#             */
/*   Updated: 2019/11/23 19:11:12 by remekram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		fw(char const *s, char c)
{
	int		k;
	int		len;

	k = 0;
	len = 0;
	if (s[0] == '\0')
		return (0);
	if (s[0] != c && s[0] != '\0')
		len++;
	while (s[k] != '\0')
	{
		if (s[k] == c && s[k + 1] != c)
			len++;
		k++;
	}
	return (len);
}

static	int		fc(const char *s, int k, char c)
{
	int		len;

	len = 0;
	while (s[k] != c && s[k] != '\0')
	{
		len++;
		k++;
	}
	return (len);
}

static int		fs(const char *s, char c)
{
	int		k;

	k = 0;
	if (!s || !c)
		return (0);
	while (s[k] != '\0' && s[k] == c)
		k++;
	if (s[k] == '\0' && k != 0)
		return (0);
	else
		return (1);
}

static char		**fh(char **d, char const *s, int k, char c)
{
	int		i;
	int		j;

	i = -1;
	while (s[k] != '\0')
	{
		while (s[k] == c && s[k] != '\0')
			k++;
		if (s[k] != c && s[k] != '\0')
		{
			j = 0;
			if (!(d[++i] = (char *)malloc(sizeof(char) * (fc(s, k, c) + 1))))
				return (NULL);
		}
		while (s[k] != c && s[k] != '\0')
			d[i][j++] = s[k++];
		d[i][j] = '\0';
	}
	d[i + 1] = NULL;
	return (d);
}

char			**ft_split(char const *s, char c)
{
	int		k;
	char	**d;

	k = 0;
	if (fs(s, c) == 0)
	{
		if (!(d = (char **)malloc(sizeof(char *) * 1)))
			return (NULL);
		d[0] = 0;
		return (d);
	}
	if (!(d = (char **)malloc(sizeof(char *) * (fw(s, c) + 1))))
		return (NULL);
	d = fh(d, s, k, c);
	return (d);
}
