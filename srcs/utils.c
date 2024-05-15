/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:15:32 by dabochko          #+#    #+#             */
/*   Updated: 2024/05/15 13:45:11 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	*join_arguments(char **argv, int argc)
{
	char	*tmp;
	char	*str;
	int		i;

	i = 2;
	str = ft_strdup(argv[1]);
	while (i < argc)
	{
		tmp = ft_strjoin(str, " ");
		free(str);
		str = ft_strjoin(tmp, argv[i]);
		free(tmp);
		i++;
	}
	return (str);
}