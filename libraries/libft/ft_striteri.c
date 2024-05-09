/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:37:55 by dabochko          #+#    #+#             */
/*   Updated: 2024/02/01 11:46:25 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

/*This function takes a string s and a function f, and applies f to each     */
/*character of s, passing the index of the character and a pointer to the    */
/*character as arguments.                                                    */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/*
void my_func(unsigned int i, char *c) {
	*c = *c + i;
}

int main() {
	char s[] = "Hello, World!";

	ft_striteri(s, my_func);

	printf("%s\n", s);

	return 0;
}*/
