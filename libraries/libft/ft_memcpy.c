/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:24:09 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/26 14:58:08 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

/* This function copies n positions of memory.*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*dstination;
	char			*source;

	i = 0;
	dstination = (char *)dest;
	source = (char *)src;
	if (dstination == NULL && source == NULL && n > 0)
		return (NULL);
	while (i < n)
	{
		dstination[i] = source[i];
		i++;
	}
	return (dest);
}
/*
int main() {
    char src[50] = "Hello World!";
    char dest[50];

    memcpy(dest, src, 50);
	printf("Source origin: %s\n", src);
    printf("Destination: %s\n", dest);

	
	ft_memcpy(dest, src, 50);
    printf("Source ft: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}
*/