/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_linked_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 09:03:35 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/01/08 09:08:29 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_linked_list(int ac, int *num)
{
	t_list	*head;
	t_list	*new;
	t_list	*after_new;
	int		j;

	j = 0;
	new = NULL;
	head = NULL;
	while (ac >= (j + 1))
	{
		if ((j + 1) == 1)
		{
			new = ft_lstnew_1(num[j]);
			head = new;
		}
		else if ((j + 1) > 1)
		{
			after_new = ft_lstnew_1(num[j]);
			new->next = after_new;
			new = new->next;
		}
		j++;
	}
	return (head);
}

t_list	*ft_lstnew_1(int content)
{
	t_list	*str;

	str = (t_list *)malloc (sizeof(t_list));
	if (!str)
		return (NULL);
	str -> content = content;
	str -> next = NULL;
	return (str);
}
