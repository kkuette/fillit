/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdenion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 06:59:35 by tdenion           #+#    #+#             */
/*   Updated: 2016/03/31 17:51:29 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			main(int ac, char **av)
{
	if (ac != 2)
	{
		ft_putendl("error");
		return (0);
	}
	ft_parse(ac, av);
	return (0);
}

void		ft_parse(int n, char **ds)
{
	char	buff[BUFF_SIZE + 1];
	char	*f;
	int		ret;
	int		fd;

	ret = 0;
	if ((f = (char*)malloc(sizeof(BUFF_SIZE))) == NULL)
		return ;
	if (n == 2)
	{
		if ((fd = open(ds[1], O_RDONLY)) == -1)
		{
			ft_putendl("error");
			exit(0);
		}
		while ((ret = read(fd, buff, BUFF_SIZE)) != 0)
		{
			f = parscheck(buff, f, ret);
		}
		if ((close(fd)) == -1)
			exit(0);
	}
	ft_check(f);
}

char		*parscheck(char *buff, char *f, int ret)
{
	buff[ret] = '\0';
	if (f[ret] != '.' && f[ret] != '#' && f[ret] != '\n' && f[ret] != '\0')
	{
		ft_putendl("error");
		exit(0);
	}
	f = ft_strfjoin(f, buff);
	return (f);
}

int			ft_pcount(char *s)
{
	int	i;

	i = (ft_strlen(s) + 1) / 21;
	return (i);
}

char		**chars(char **s)
{
	int		x;
	int		y;
	char	c;

	y = -1;
	c = 'A';
	while (s[++y])
	{
		x = -1;
		while (s[y][++x])
		{
			if (s[y][x] == '#')
				s[y][x] = c;
		}
		c++;
	}
	return (s);
}
