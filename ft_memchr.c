/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqbuelez <sqbuelez@42amman.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:33:37 by sqbuelez          #+#    #+#             */
/*   Updated: 2024/08/28 17:33:38 by sqbuelez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*search;

	search = (unsigned char *)s;
	while (n > 0)
	{
		if (*search == (unsigned char)c)
		{
			return ((void *)search);
		}
		search++;
		n--;
	}
	return (NULL);
}
