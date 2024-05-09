/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:38:10 by dabochko          #+#    #+#             */
/*   Updated: 2024/02/14 14:25:50 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;
	int		word;

	count = 0;
	word = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!word)
			{
				count++;
				word = 1;
			}
		}
		else
		{
			word = 0;
		}
		s++;
	}
	return (count);
}

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static int	ft_word_length(char const *s, char c)
{
	size_t	word_len;

	if (!ft_strchr(s, c))
		word_len = ft_strlen(s);
	else
		word_len = ft_strchr(s, c) - s;
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	char	**pt_pt_char;
	size_t	word_len;
	int		i;

	if (!s)
		return (0);
	pt_pt_char = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !pt_pt_char)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_len = ft_word_length(s, c);
			pt_pt_char[i++] = ft_substr(s, 0, word_len);
			if (pt_pt_char[i - 1] == NULL)
				return (ft_free(pt_pt_char));
			s += word_len;
		}
	}
	pt_pt_char[i] = NULL;
	return (pt_pt_char);
}

/* ************************************************************************** */
/* DESCRIPTION:                                                               */
/*                                                                            */
/* Splits the string 's' using the delimiter 'c' and returns an array of      */
/* strings representing the words in 's'. Each word is allocated its own      */
/* memory block. If memory allocation fails, it frees the previously          */
/* allocated memory and returns NULL.                                         */
/*                                                                            */
/* INPUT:                                                                     */
/* - The string (s) to be split.                                              */
/* - The delimiter (c) used to identify word boundaries.                      */
/*                                                                            */
/* OUTPUT:                                                                    */
/* - A pointer to an array of strings (char **) representing the split words. */
/* - Returns NULL if memory allocation fails or if 's' is NULL.               */
/*                                                                            */
/* NOTE:                                                                      */
/* - The returned array of strings is terminated by a NULL pointer.           */
/* - The caller is responsible for freeing the allocated memory.              */
/* ************************************************************************** */
