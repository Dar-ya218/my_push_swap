/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:40:12 by dabochko          #+#    #+#             */
/*   Updated: 2024/02/07 15:53:18 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

/*It makes a copy of the string s1, does the function f on each character */
/* of the string and returns the new string. */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	s_len;
	char	*t;
	size_t	i;

	if (!s || !f)
		return (NULL);
	s_len = ft_strlen(s);
	t = (char *)malloc(s_len + 1);
	if (t)
	{
		i = 0;
		while (i < s_len)
		{
			t[i] = f(i, s[i]);
			i++;
		}
		t[i] = '\0';
	}
	return (t);
}

/*
char my_func(unsigned int i, char c) {
    return c; //put characther
}

int main() {
    const char *s = "helloworld";

    char *result = ft_strmapi(s, my_func);

    if (result) {
        printf("Original string: \"%s\"\n", s);
        printf("Mapped string: \"%s\"\n", result);
        free(result);  // Don't forget to free the memory!
    } else {
        printf("Failed to allocate memory.\n");
    }

    return 0;
}*/
