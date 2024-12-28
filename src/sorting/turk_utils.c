/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:42:20 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/27 14:44:48 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	set_cost(t_stack *a, t_stack *b)
{
	int	lstack_a;
	int	lstack_b;

	lstack_a = stack_len(a);
	lstack_b = stack_len(b);
	while (b)
	{
		b->push_cost = b->index;
		if (!b->is_above_median)
			b->push_cost += lstack_b - (b->index);
		if (b->target_node->is_above_median)
			b->push_cost = (b->target_node->index);
		else
			b->push_cost = lstack_a - (b->target_node->index);
		b = b->next;
	}
}

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
	int		i;
	size_t	stack_len;

	stack_len = get_stack_len(head) / 2;
	i = 0;
	while ((*head))
	{
		if (i < stack_len)
			(*head)->is_above_median = 1;
		else
			(*head)->is_above_median = 0;
		(*head)->index = i;
		(*head) = (*head)->next;
		i++;
	}
}

void	init_nodes(t_stack **a, t_stack **b)
{
	set_mediane(a);
	set_mediane(b);
	set_target(*a, *b);
	set_cost(*a, *b);
}
