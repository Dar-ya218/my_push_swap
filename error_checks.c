/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
{
        check = 0;
/* ************************************************************************** */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:54:35 by dabochko          #+#    #+#             */
/*   Updated: 2024/04/10 14:54:52 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


dabochko@car12s2 push_swap % cat push.c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:37:18 by dabochko          #+#    #+#             */
/*   Updated: 2024/04/10 15:37:23 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


dabochko@car12s2 push_swap % touch error_checks.c
dabochko@car12s2 push_swap % vim error_checks.c
dabochko@car12s2 push_swap % git status
On branch master
Your branch is up to date with 'origin/master'.

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	error_checks.c

nothing added to commit but untracked files present (use "git add" to track)
dabochko@car12s2 push_swap % git add .
dabochko@car12s2 push_swap % git commit -m "error_checks"
[master 775b18a] error_checks
 1 file changed, 64 insertions(+)
 create mode 100644 error_checks.c
dabochko@car12s2 push_swap % git push
Enumerating objects: 4, done.
Counting objects: 100% (4/4), done.
Delta compression using up to 6 threads
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 920 bytes | 920.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0)
remote: . Processing 1 references
remote: Processed 1 references in total
To vogsphere.42barcelona.com:vogsphere/intra-uuid-cee15428-b65d-42ec-bd19-b0a3fecb5b3c-5629883-dabochko
   42eec77..775b18a  master -> master
dabochko@car12s2 push_swap % cat error_checks.c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabochko <dabochko@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:47:36 by dabochko          #+#    #+#             */
/*   Updated: 2024/04/15 15:48:17 by dabochko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../includes/push_swap.h"

/**
 * This function checks for duplicates by iterating through
 * our linked list and updating a counter anytime a number
 * matches the tmp list (comparing against itself)
**/
int	check_duplicates(t_stack *a)
{
	t_stack	*tmp;
	int		check;

	check = 0;
	while (a != NULL)
	{
		tmp = a;
		check = 0;
		while (tmp != NULL)
		{
			if (tmp->number == a->number)
				check++;
			tmp = tmp->next;
		}
		if (check > 1)
			return (1);
		a = a->next;
	}
	return (0);
}

/** This function checks whether the input string only contains
 * valid characters (signs or numbers), and no other unwanted chars.
**/
int	is_number(const char *str)
{
	if ((*str) == '\0')
		return (0);
	if ((*str) == '+' || (*str) == '-')
	{
		if (ft_strlen(str) == 1)
			return (0);
		str++;
	}
	while (*str)
	{
		if ((*str) < '0' || (*str) > '9')
			return (0);
		str++;
	}
	return (1);
}