/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonafi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 16:09:04 by ebonafi           #+#    #+#             */
/*   Updated: 2016/03/31 17:26:58 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		putcheck(t_lst *l, char **m, int x, int y)
{
	int	j;
	int	len;

	j = 0;
	len = ft_strlen(m[y]);
	l->y = -1;
	while (((++l->y + y) < len) && l->p[l->y])
	{
		l->x = -1;
		while (((++l->x + x) < len) && l->p[l->y][l->x] != '\0')
		{
			if (m[y + l->y][x + l->x] == '.' && ft_isalpha(l->p[l->y][l->x]))
				j++;
			if (j == 4)
				return (1);
		}
	}
	return (0);
}

char	**putship(t_lst *l, char **m, int n)
{
	int		y;
	int		x;
	char	**t;

	t = NULL;
	if (!l)
		return (m);
	y = -1;
	while (++y < n)
	{
		x = -1;
		while (++x < n)
		{
			if (putcheck(l, m, x, y))
			{
				t = putship(l->next, putp(l, m, x, y), n);
				if (t)
					return (t);
				m = clear_map(l, m);
			}
		}
	}
	return (NULL);
}

char	**putp(t_lst *l, char **m, int x, int y)
{
	int	tmp;

	tmp = x;
	l->y = -1;
	while (l->p[++l->y] && m[y])
	{
		l->x = -1;
		while (++l->x < ft_strlen(l->p[l->y]) && m[y][x])
		{
			if (l->p[l->y][l->x] != '.')
				m[y][x] = l->p[l->y][l->x];
			x++;
		}
		x = tmp;
		y++;
	}
	return (m);
}
