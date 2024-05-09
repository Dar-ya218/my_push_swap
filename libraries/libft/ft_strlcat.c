/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:26:51 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/26 15:18:58 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_l;
	size_t	src_l;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	i = dst_l;
	j = 0;
	if (dstsize <= dst_l)
		return (src_l + dstsize);
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (dst_l + src_l);
}
/*int main() {
    char src[10] = " World!";
    char dest[51] = "Hello,";

    size_t len = ft_strlcat(dest, src, 10);

    printf("Length: %zu\n", len);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}
*/