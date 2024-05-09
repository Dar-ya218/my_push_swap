/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:22:18 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/29 14:47:18 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

/*This function compares the first n bytes of the memory areas s1 and s2.*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*uc_s1;
	unsigned char	*uc_s2;
	size_t			i;

	uc_s1 = (unsigned char *)s1;
	uc_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n && uc_s1[i] == uc_s2[i])
		i++;
	if (i == n)
		return (0);
	else
		return (uc_s1[i] - uc_s2[i]);
}

/*int main() {
    const char *s1 = "Hello, World!";
    const char *s2 = "Hello, world!";
    size_t n = 7;

    int result = ft_memcmp(s1, s2, n);

    printf("Comparison result: %d\n", result);

    return 0;
}*/
