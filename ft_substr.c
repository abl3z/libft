/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqbuelez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:54:19 by sqbuelez          #+#    #+#             */
/*   Updated: 2024/08/31 20:54:20 by sqbuelez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*dest;

	i = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (s_len <= start)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	while (s[start + i] && i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
