/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdenion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 07:07:51 by tdenion           #+#    #+#             */
/*   Updated: 2016/03/31 17:23:24 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_lst	*lstnew(char *s, int w)
{
	t_lst	*new;

	if ((new = (t_lst*)malloc(sizeof(t_lst))) == NULL)
		return (NULL);
	if (s)
	{
		new->p = cutship(ft_strsplit(s, '\n'));
		new->w = w;
		new->y = 0;
		new->x = 0;
		new->z = 0;
		new->a = 0;
		new->next = NULL;
	}
	return (new);
}

void	lstadd(t_lst **alst, t_lst *new)
{
	if (alst == NULL || new == NULL)
		exit(0);
	new->next = *alst;
	*alst = new;
}

t_lst	*create_lst(char *s)
{
	t_lst	*lst;
	t_lst	**alst;
	char	**c;
	int		i;

	i = ft_pcount(s);
	c = chars(ft_pcut(s));
	if ((alst = (t_lst**)malloc(sizeof(t_lst*))) == NULL)
		exit(0);
	while (--i != -1)
	{
		lst = lstnew(c[i], 'A' + i);
		lstadd(alst, lst);
		if (ft_pcount(s) == i + 1)
			lst->next = NULL;
	}
	free(alst);
	return (lst);
}
