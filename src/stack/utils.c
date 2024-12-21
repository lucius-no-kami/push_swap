/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 10:17:42 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/21 10:57:03 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack	**a)
{
	t_stack	*tmp;

	if (!a)
		return ;
	while (*a)
	{
		tmp = (*a)->next;
		free(*a);
		*a = tmp;
	}
	*a = NULL;
}

void	free_errors(t_stack **a)
{
	free_stack(a);
	ft_printf(RED"Error\n"RESET);
	exit(EXIT_FAILURE);
}

t_stack	*find_last_node(t_stack *head)
{
	t_stack	*current;

	current = head;
	while (current->next != NULL)
		current = current->next;
	return (current);
}
