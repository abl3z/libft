/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqbuelez <sqbuelez@42amman.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 18:36:07 by sqbuelez          #+#    #+#             */
/*   Updated: 2024/08/27 22:01:57 by sqbuelez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t size)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < size)
	{
		p[i] = 0;
		i++;
	}
}
