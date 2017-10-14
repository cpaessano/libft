/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva <csilva@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 23:10:53 by csilva            #+#    #+#             */
/*   Updated: 2017/09/26 13:01:24 by csilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *c;
	char *add;

	c = (char *)malloc(sizeof(char) * size);
	add = c;
	if (c)
	{
		if (size)
		{
			while (size--)
				*add++ = 0;
			return (c);
		}
	}
	return (NULL);
}
