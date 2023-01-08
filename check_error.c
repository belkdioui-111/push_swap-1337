/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 09:00:09 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/01/08 09:06:45 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicates(t_list *head)
{
	t_list	*temp;

	while (head)
	{
		temp = head;
		temp = temp -> next;
		while (temp)
		{
			if (temp->content == head->content)
				return (0);
			temp = temp -> next;
		}
		head = head -> next;
	}
	return (1);
}

int	error(int ac, char **av)
{
	int		var;
	int		*num;
	int		j;
	t_list	*head;

	num = malloc((ac - 1) * sizeof(int));
	if (!num)
		return (0);
	head = NULL;
	j = 0;
	var = 0;
	while (ac > (j + 1))
	{
		num[j] = ft_atoi(av[j + 1], &var);
		if (var != 0)
			return (0);
		j++;
	}
	head = create_linked_list(ac - 1, num);
	if (!check_duplicates(head))
		return (0);
	return (1);
}
