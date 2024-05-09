/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:23:05 by dabochko          #+#    #+#             */
/*   Updated: 2024/02/13 12:41:33 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

/* Fills the first 'len' bytes of the memory area pointed to by 'b' with the
 constant byte 'c'. It returns a pointer to the memory area 'b'.           */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*memory_ptr;
	unsigned char	value;
	size_t			i;

	i = 0;
	memory_ptr = (unsigned char *)b;
	value = (unsigned char)c;
	while (i < len)
	{
		memory_ptr[i] = value;
		i++;
	}
	return (b);
}
/*
int main(void)
{
	char b[] = "Mundo";
	char *res;

	printf("string: %s\n", b);
	res = ft_memset(b, 42, 3);
	printf("mio_memset: %s\n", res);
	return (0);
}*/
