/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:39:33 by dabochko          #+#    #+#             */
/*   Updated: 2024/02/14 12:34:59 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
	{
		len = 1;
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			len++;
		}
		while (n != 0)
		{
			n /= 10;
			len++;
		}
	}
	return (len);
}

static void	ft_convert_to_string(int n, char *result, size_t len)
{
	int	sign;

	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		result[--len] = (n % 10) + '0';
		n /= 10;
	}
	if (sign == -1)
		result[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*result;
	size_t	len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_numlen(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_convert_to_string(n, result, len);
	return (result);
}
/*
int main()
{
  int n = 1234567890;
   printf("%s\n", ft_itoa(n));
  return (0);
}*/
