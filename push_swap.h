/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bel-kdio <bel-kdio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 06:53:51 by bel-kdio          #+#    #+#             */
/*   Updated: 2023/01/08 09:07:46 by bel-kdio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdio.h>
# include<unistd.h>
# include<stdlib.h>
# include<string.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *str, int *var);
t_list	*ft_lstnew_1(int content);
int		error(int ac, char **av);
int		check_duplicates(t_list *head);
t_list	*create_linked_list(int ac, int *num);

#endif