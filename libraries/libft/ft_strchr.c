/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:18:14 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/26 12:02:03 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t			idx;
	unsigned char	target;

	idx = 0;
	target = (unsigned char)c;
	while (s[idx] != target && s[idx] != '\0')
		idx++;
	if (s[idx] == '\0' && target != '\0')
		return (NULL);
	return ((char *)(s + idx));
}
/*int main() {
    const char *s = "Hello, World!";
    int c = 'W';

    char *result = ft_strchr(s, c);

    if (result) {
        printf("Found '%c' in \"%s\" at position: %ld\n", c, s, result - s);
    } else {
        printf("Character '%c' not found in \"%s\"\n", c, s);
    }

    return 0;
}*/