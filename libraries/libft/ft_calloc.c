/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:24:47 by dabochko          #+#    #+#             */
/*   Updated: 2024/02/06 12:58:35 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	result = (void *)malloc(nmemb * size);
	if (!result)
		return (NULL);
	ft_bzero(result, nmemb * size);
	return (result);
}

/*int main() {
    size_t nmemb = 5;
    size_t size = sizeof(char);

    char *result = (char *)ft_calloc(nmemb, size);

    if (result) {
        printf("Allocated %ld bytes. Contents:\n", nmemb * size);
        for (size_t i = 0; i < nmemb * size; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
    } else {
        printf("Failed to allocate %ld bytes.\n", nmemb * size);
    }

    free(result);
    return 0;
}*/
