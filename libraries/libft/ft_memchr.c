/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:21:20 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/29 14:14:24 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	void			*result;
	size_t			bytes;
	unsigned char	*uc_s;
	short			found;
	unsigned char	searched;

	result = NULL;
	if (n)
	{
		uc_s = (unsigned char *)s;
		searched = (unsigned char)c;
		bytes = 0;
		found = 0;
		while (bytes < n && !found)
		{
			if (uc_s[bytes] == searched)
				found = 1;
			else
				bytes++;
		}
		if (found)
			result = &uc_s[bytes];
	}
	return (result);
}

/*int main() {
    const char *s = "Hello, World!";
    int c = 'o';
    size_t n = 10;

    char *result = ft_memchr(s, c, n);

    if (result) {
        printf("Found '%c' at position: %ld\n", c, result - s);
    } else {
        printf("Character '%c' not found within the first %ld"
				"characters.\n", c, n);
    }

    return 0;
}*/