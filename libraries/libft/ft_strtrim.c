/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:37:35 by dabochko          #+#    #+#             */
/*   Updated: 2024/02/06 16:53:27 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	s_len;
	size_t	s_ini;
	size_t	s_end;
	char	*t;

	if (!s || !set)
		return (NULL);
	if (s[0] == '\0')
	{
		t = (char *)malloc(sizeof(char));
		if (t)
			t[0] = '\0';
		return (t);
	}
	s_len = ft_strlen(s);
	s_ini = 0;
	while (s[s_ini] != '\0' && (ft_strchr(set, s[s_ini]) != NULL))
		s_ini++;
	s_end = s_len - 1;
	while (s[s_end] != '\0' && (ft_strchr(set, s[s_end]) != NULL))
		s_end--;
	t = ft_substr(s, s_ini, (s_end - s_ini + 1));
	return (t);
}

/*int main() {
	const char *s = "Hello, World!";
	const char *set = "Hld!";

	char *result = ft_strtrim(s, set);

	printf("String: \"%s\"\n", s);
	printf("Set: \"%s\"\n", set);
	printf("Trimmed string: \"%s\"\n", result);

	free(result);

	return 0;
}*/
