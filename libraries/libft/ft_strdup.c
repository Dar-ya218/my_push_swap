/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:25:45 by dabochko          #+#    #+#             */
/*   Updated: 2024/02/06 13:26:56 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	size_t	size;
	void	*ptr;

	size = ft_strlen(s1);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, (size + 1));
	return (ptr);
}
/*
int main()
{
	char *s1 = "Hello";
	char *s2 = ft_strdup(s1);
	printf("%s\n", s2);
	return (0);
}*/
