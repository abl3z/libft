/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqbuelez <sqbuelez@42amman.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:36:49 by sqbuelez          #+#    #+#             */
/*   Updated: 2024/08/29 22:46:14 by sqbuelez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	count;
	char	*src;

	count = 0;
	src = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!src)
		return (NULL);
	while (s[count])
	{
		src[count] = s[count];
		count++;
	}
	src[count] = '\0';
	return (src);
}
