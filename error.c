/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdenion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 06:59:27 by tdenion           #+#    #+#             */
/*   Updated: 2016/03/24 16:35:01 by ebonafi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_check(char *s)
{
	int check;

	check = 0;
	check = check_block(s);
	check = (check != -1) ? (check_line(s)) : (check);
	check = (check != -1) ? (check_nbline(s)) : (check);
	check = (check != -1) ? (check_piece(s)) : (check);
	check = (check != -1) ? (check_ret(s)) : (check);
	check = (check != -1) ? (check_p2(s)) : (check);
	if (check == -1)
	{
		ft_putendl("error");
		exit(0);
	}
	lstcrt(s);
}

int		check_block(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '.' && s[i] != '#' && s[i] != '\n')
			return (-1);
		if (s[0] == '\n')
			return (-1);
		if (s[ft_strlen(s) - 1] == '\n' && s[ft_strlen(s) - 2] == '\n')
			return (-1);
		if (s[ft_strlen(s) - 1] != '\n')
			return (-1);
		i++;
	}
	return (0);
}

int		check_line(char *s)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
		{
			if (((i - n) % 4) != 0)
				return (-1);
			n++;
		}
		i++;
	}
	return (0);
}

int		check_nbline(char *s)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
		{
			b++;
			if (s[i] == '\n' && s[i + 1] == '\n' && s[i + 1] != '\0')
			{
				if (b != 4)
					return (-1);
				b = 0;
				i++;
			}
		}
		i++;
	}
	return (0);
}

int		check_piece(char *s)
{
	int i;
	int n;

	n = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '#')
		{
			if (s[i + 1] == '#' || s[i - 1] == '#' ||
					s[i + 5] == '#' || s[i - 5] == '#')
				n++;
		}
		i++;
	}
	if (s[i] == '\0' && n == 0)
		return (-1);
	else if (n % 4 == 0)
		return (0);
	return (-1);
}
