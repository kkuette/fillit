/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebonafi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/24 15:49:12 by ebonafi           #+#    #+#             */
/*   Updated: 2016/03/31 17:26:20 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_ret(char *s)
{
	int i;
	int n;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
			n++;
		i++;
	}
	n++;
	if (n % 5 != 0)
		return (-1);
	return (0);
}

int		check_p2(char *s)
{
	int i;
	int n;

	n = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		n = check_contc(&(s)[i]);
		if (n == 6 || n == 8)
			n = 0;
		else
			return (-1);
		i += 20;
		i++;
	}
	if (n != 0)
		return (-1);
	return (0);
}

int		check_contc(char *s)
{
	int i;
	int n;

	n = 0;
	i = 0;
	while (i < 20 && s[i] != '\0')
	{
		if (s[i] == '#')
		{
			if (s[i + 1] == '#' && (i + 1 < 20))
				n++;
			if (s[i - 1] == '#' && (i - 1 >= 0))
				n++;
			if (s[i + 5] == '#' && (i + 5 < 20))
				n++;
			if (s[i - 5] == '#' && (i - 5 >= 0))
				n++;
		}
		i++;
	}
	return (n);
}
