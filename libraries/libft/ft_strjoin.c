/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:36:42 by dabochko          #+#    #+#             */
/*   Updated: 2024/02/06 14:14:55 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_size;
	size_t	s1s2_size;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	s1_size = ft_strlen(s1);
	s1s2_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = (char *)malloc(s1s2_size);
	if (join != NULL)
	{
		ft_strlcpy(join, s1, s1_size + 1);
		ft_strlcat(join, s2, s1s2_size);
	}
	return (join);
}

/*int main() {
	const char *s1 = "Hello, ";
	const char *s2 = "World!";

	char *result = ft_strjoin(s1, s2);

	printf("String 1: \"%s\"\n", s1);
	printf("String 2: \"%s\"\n", s2);
	printf("Joined string: \"%s\"\n", result);

	free(result);

	return 0;
}*/
