/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqbuelez <sqbuelez@42amman.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 22:39:42 by sqbuelez          #+#    #+#             */
/*   Updated: 2024/08/27 22:44:51 by sqbuelez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memmove(void *dest, const void *src, size_t size)
// {
// 	unsigned char	*p;
// 	unsigned char	*s;
// 	size_t			i;

// 	i = 0;
// 	p = (unsigned char *)dest;
// 	s = (unsigned char *)src;
// 	if (p < s)
// 	{
// 		while (i < size)
// 		{
// 			p[i] = s[i];
// 			i++;
// 		}
// 	}
// 	else
// 	{
// 		while (size > 0)
// 		{
// 			p[size - 1] = s[size - 1];
// 			size--;
// 		}
// 	}
// 	return (dest);
// }

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*srcc;
	char	*dstc;
	size_t	i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	srcc = (char *)src;
	dstc = (char *)dst;
	if (srcc < dstc)
		while ((int)(--len) >= 0)
			*(dstc + len) = *(srcc + len);
	else
		while (++i < len)
			*(dstc + i) = *(srcc + i);
	return (dst);
}
