/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdenion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 06:59:19 by tdenion           #+#    #+#             */
/*   Updated: 2016/03/31 17:24:44 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	lstcrt(char *s)
{
	t_lst	*l;
	int		n;

	l = NULL;
	n = ncalc(ft_pcount(s));
	putmap(resolve(l, n, s));
	exit(0);
}

int		ncalc(int n)
{
	int i;

	i = 1;
	while (i * i < n * 4)
		i++;
	return (i);
}

void	putmap(char **m)
{
	int y;

	y = -1;
	while (m[++y])
		ft_putendl(m[y]);
	ft_putchar('\n');
}

char	**resolve(t_lst *l, int n, char *s)
{
	char	**m;
	t_lst	*tmp;

	tmp = NULL;
	if ((m = putship(create_lst(s), create_map(n), n)) != NULL)
		return (m);
	free(m);
	return (resolve(l, n + 1, s));
}
