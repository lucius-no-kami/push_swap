/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 12:57:36 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/25 12:55:37 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_target(t_stack *a, t_stack *b)
{
	t_stack	*current;
	t_stack	*target;
	long	match;

	while (b)
	{
		current = a;
		match = LONG_MAX;
		while (current)
		{
			if (current->value > b->value && current->value < match)
			{
				b->target_node = current;
				match = current->value;
			}
			current = current->next;
		}
		if (match == LONG_MAX)
			b->target_node = get_smallest(a);
		else
			b->target_node = target;
		b = b->next;
	}
}

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
