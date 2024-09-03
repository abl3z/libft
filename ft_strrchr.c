/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqbuelez <sqbuelez@42amman.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:42:34 by sqbuelez          #+#    #+#             */
/*   Updated: 2024/08/28 12:42:35 by sqbuelez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	ch;

	ch = (char)c;
	last = 0;
	while (*s)
	{
		if (*s == ch)
			last = (char *)s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (last);
}
