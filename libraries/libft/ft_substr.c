/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:36:10 by dabochko          #+#    #+#             */
/*   Updated: 2024/02/06 14:03:48 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	x;
	size_t	str_len;

	if (!str)
		return (NULL);
	x = 0;
	str_len = ft_strlen(str);
	if (start < str_len)
	{
		if ((start + len) > str_len)
			x = str_len - start;
		else
			x = len;
	}
	sub = (char *)malloc((x + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	sub = (char *)ft_memcpy(sub, (str + start), x);
	*(sub + x) = '\0';
	return (sub);
}

/*int main() {
    const char *s = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *result = ft_substr(s, start, len);

    printf("Original string: \"%s\"\n", s);
    printf("Substring: \"%s\"\n", result);

    free(result);  // Don't forget to free the memory!

    return 0;
}*/
