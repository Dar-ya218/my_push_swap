/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:20:12 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/26 15:26:51 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		res;

	i = 0;
	res = 0;
	while (i < n)
	{
		res = (unsigned char)s1[i] - (unsigned char)s2[i];
		if ((unsigned char)s1[i] == '\0' || (unsigned char)s2[i] == '\0')
			break ;
		if (res != 0)
			break ;
		i++;
	}
	return (res);
}

/*int main() {
    const char *s1 = "Hello, World!";
    const char *s2 = "Hello, world!";
    size_t n = 7;

    int result = ft_strncmp(s1, s2, n);

    printf("Comparison result: %d\n", result);

    return 0;
}*/
