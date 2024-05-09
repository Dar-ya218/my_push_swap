/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:39:38 by dabochko          #+#    #+#             */
/*   Updated: 2024/02/02 11:57:17 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
//#include <unistd.h>

/*This function takes a character and a file descriptor, and writes the       */
/*character to the given file descriptor.                                     */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main() {
	ft_putchar_fd('a', 1);
	return 0;
}*/
