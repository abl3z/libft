/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqbuelez <sqbuelez@42amman.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:23:39 by sqbuelez          #+#    #+#             */
/*   Updated: 2024/09/02 22:54:16 by sqbuelez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*s;

	i = 0;
	p = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < size)
	{
		p[i] = s[i];
		i++;
	}
	return (dest);
}
