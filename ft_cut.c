/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonafi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 16:06:46 by ebonafi           #+#    #+#             */
/*   Updated: 2016/03/31 17:52:44 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**cutship(char **p)
{
	int x;
	int y;

	y = -1;
	while (++y < 4)
	{
		x = 4;
		while (x >= 0 && !ft_isalpha(p[y][x]))
		{
			if (p[y][x] == '.')
				p[y][x] = '\0';
			x--;
		}
		while (x >= 0)
		{
			if (!ft_isalpha(p[y][x]))
				p[y][x] = '.';
			x--;
		}
	}
	p = cutr(cutr(cutr(cutfix(p), 0), 1), 2);
	return (p);
}

char	**cutr(char **m, int x)
{
	int y;
	int i;

	i = 0;
	y = -1;
	while (m[++y])
	{
		x = 0;
		if (m[y][x] == '.')
			++i;
	}
	if (i == y)
	{
		y = -1;
		while (m[++y])
			m[y] = &(m[y])[x + 1];
	}
	return (m);
}

char	**cutfix(char **p)
{
	int		y;
	int		i;
	char	**tmp;

	i = 0;
	y = -1;
	while (p[++y])
		if (p[y][0] != '\0')
			i++;
	if ((tmp = (char**)malloc(sizeof(char*) * i + 1)) == NULL)
		return (NULL);
	i = 0;
	y = -1;
	while (p[++y])
		if (p[y][0] != '\0')
			tmp[i++] = ft_strdup(p[y]);
	tmp[i] = NULL;
	return (tmp);
}

char	**ft_pcut(char *s)
{
	int		z;
	int		tmp;
	char	**c;

	tmp = 0;
	z = -1;
	if ((c = (char**)malloc(sizeof(char*) * ft_pcount(s) + 1)) == NULL)
		return (NULL);
	while (tmp < ft_strlen(s))
	{
		c[++z] = ft_strsub(s, tmp, 20);
		tmp += 21;
	}
	c[++z] = NULL;
	return (c);
}
