/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqbuelez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:14:12 by sqbuelez          #+#    #+#             */
/*   Updated: 2024/08/31 20:14:13 by sqbuelez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*extract_word(char const *s, char c, size_t *i)
{
	size_t	start;
	size_t	end;
	char	*word;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	end = *i;
	word = ft_substr(s, start, end - start);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	strs = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		strs[j] = extract_word(s, c, &i);
		if (!strs[j])
			return (NULL);
		j++;
	}
	strs[j] = NULL;
	return (strs);
}
