/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonafi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 15:57:00 by ebonafi           #+#    #+#             */
/*   Updated: 2016/03/31 17:24:57 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**create_map(int n)
{
	int		y;
	int		x;
	char	**m;

	y = 0;
	x = 0;
	if ((m = (char**)malloc(sizeof(char*) * (n + 1))) == NULL)
		exit(0);
	while (y < n)
	{
		if ((m[y] = (char*)malloc(sizeof(char) * n + 1)) == NULL)
			exit(0);
		while (x < n)
		{
			m[y][x] = '.';
			x++;
		}
		m[y][x] = '\0';
		x = 0;
		y++;
	}
	m[y] = NULL;
	return (m);
}

char		**clear_map(t_lst *tmp, char **m)
{
	int		y;
	int		x;

	y = -1;
	while (m[++y])
	{
		x = -1;
		while (m[y][++x])
		{
			if (m[y][x] == tmp->w)
				m[y][x] = '.';
		}
	}
	return (m);
}
