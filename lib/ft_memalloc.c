/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdenion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/01 08:54:52 by tdenion           #+#    #+#             */
/*   Updated: 2016/02/08 16:14:33 by tdenion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *alloc;

	if (((alloc = malloc(size)) == NULL) || (size == 0))
		return (NULL);
	ft_bzero(alloc, size);
	return ((void*)alloc);
}
