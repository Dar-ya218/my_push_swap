/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:23:55 by dabochko          #+#    #+#             */
/*   Updated: 2024/01/29 14:20:51 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	my_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	int		total;
	int		len;
	int		i;
	short	sign;

	sign = 1;
	total = 0;
	len = ft_strlen(s);
	i = 0;
	while ((my_isspace(s[i])) && i <= len)
		i++;
	if ((s[i] == '-') || (s[i] == '+'))
		sign -= 2 * (s[i++] == '-');
	while (ft_isdigit(s[i]) && (i < len))
		total = total * 10 + (s[i++] - '0');
	return (total * sign);
}

/*int main() {
    const char *s1 = "   -123";
    const char *s2 = "456";
    const char *s3 = "   +789";
    const char *s4 = "   abc";

    printf("ft_atoi(\"%s\") = %d\n", s1, ft_atoi(s1));
    printf("ft_atoi(\"%s\") = %d\n", s2, ft_atoi(s2));
    printf("ft_atoi(\"%s\") = %d\n", s3, ft_atoi(s3));
    printf("ft_atoi(\"%s\") = %d\n", s4, ft_atoi(s4));

   return 0;
}*/
