/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:41:20 by dabochko          #+#    #+#             */
/*   Updated: 2024/02/02 12:00:38 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
//#include <unistd.h>

/*This function takes a string and a file descriptor, and writes the string  */
/*to the given file descriptor, followed by a newline.                       */

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*
int main() {
	ft_putendl_fd("Hello, World!", 1);
	return 0;
}*/
