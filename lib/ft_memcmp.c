/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdenion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 11:22:36 by tdenion           #+#    #+#             */
/*   Updated: 2016/02/02 11:41:39 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		diff;

	diff = 0;
	i = 0;
	while (diff == 0 && i < n)
	{
		diff = ft_charcmp(((char*)s1)[i], ((char*)s2)[i]);
		i++;
	}
	return (diff);
}
