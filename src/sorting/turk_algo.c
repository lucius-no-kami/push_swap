/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 12:57:36 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/24 18:48:41 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_mediane(t_stack **head)
{
	size_t	stack_len;
	t_stack	*current;

	stack_len = get_stack_len(head);
	current = *head;
	while (current)
	{
		if (stack_len > 0)
		{
			current->is_above_median = 1;
			stack_len--;
		}
		else
			current->is_above_median = 0;
		current = current->next;
	}
}

void	turk_algorithm(t_stack **a, t_stack **b)
{
	
}
