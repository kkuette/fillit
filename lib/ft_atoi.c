/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdenion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 08:55:50 by tdenion           #+#    #+#             */
/*   Updated: 2016/02/09 10:13:38 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int nb;
	int i;
	int neg;

	neg = 1;
	i = 0;
	nb = 0;
	while ((nptr[i] >= 0 && nptr[i] <= 32))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg = -1;
		i++;
	}
	while (nptr[i] != '\0')
	{
		if (ft_isdigit(nptr[i]) == 0)
			return (nb * neg);
		nb = nb * 10 + nptr[i++] - '0';
	}
	return (nb * neg);
}
