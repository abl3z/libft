/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqbuelez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 09:34:40 by sqbuelez          #+#    #+#             */
/*   Updated: 2024/09/02 23:13:43 by sqbuelez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	int_len(int x)
{
	int	count;

	count = 0;
	if (x == 0)
		return (1);
	if (x < 0)
		count++;
	while (x != 0)
	{
		x /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	num;

	len = int_len(n);
	num = n;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	while (num != 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
