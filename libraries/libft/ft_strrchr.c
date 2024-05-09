/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:19:05 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/26 12:01:06 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t			idx;
	int				last_found;
	unsigned char	target;

	last_found = -1;
	idx = 0;
	target = (unsigned char)c;
	while (s[idx] != '\0')
	{
		if (s[idx] == target)
			last_found = idx;
		idx++;
	}
	if (last_found == -1 && target != '\0')
		return (NULL);
	if (last_found == -1 && target == '\0')
		return ((char *)(s + idx));
	return ((char *)(s + last_found));
}
/*char	*ft_strrchr(const char *s, int c)
{
	size_t			idx;
	int				last_found;
	unsigned char	target;

	last_found = -1;
	idx = 0;
	target = (unsigned char)c;
	while (s[idx] != '\0')
	{
		if (s[idx] == target)
			last_found = idx;
		idx++;
	}
	if (last_found == -1 && target != '\0')
		return (NULL);
	if (last_found == -1 && target == '\0')
		return ((char *)(s + idx));
	return ((char *)(s + last_found));
}*/