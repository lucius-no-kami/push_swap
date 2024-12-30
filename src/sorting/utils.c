/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:19:16 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/30 08:08:18 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_biggest(t_stack *head)
{
	long	max_val;

	max_val = LONG_MIN;
	while (head)
	{
		if (head->value > max_val)
			max_val = head->value;
		head = head->next;
	}
	return ((int)max_val);
}

t_stack	*find_smallest(t_stack *head)
{
	long	smallest;
	t_stack	*target;

	if (!head)
		return (NULL);
	smallest = LONG_MAX;
	while (head)
	{
		if (head->value < smallest)
		{
			smallest = head->value;
			target = head;
		}
		head = head->next;
	}
	return (target);
}

void	set_median(t_stack *head)
{
	int	median;
	int	i;

	if (!head)
		return ;
	median = stack_len(head) / 2;
	i = 0;
	while (head)
	{
		head->index = i;
		if (i <= median)
			head->is_above_median = true;
		else
			head->is_above_median = false;
		head = head->next;
		i++;
	}
}

void	set_target(t_stack *a, t_stack *b)
{
	long	target_value;
	t_stack	*target;
	t_stack	*current;

	while (b)
	{
		target_value = LONG_MAX;
		current = a;
		while (current)
		{
			if (current->value < target_value && current->value > b->value)
			{
				target_value = current->value;
				target = current;
			}
			current = current->next;
		}
		if (target_value == LONG_MAX)
			b->target_node = find_smallest(a);
		else
			b->target_node = target;
		b = b->next;
	}
}

void	set_cost(t_stack *a, t_stack *b)
{
	int	lstack_a;
	int	lstack_b;

	lstack_a = stack_len(a);
	lstack_b = stack_len(b);
	while (b)
	{
		b->push_cost = b->index;
		if (!b->is_above_median)
			b->push_cost = lstack_b - (b->index);
		if (b->target_node->is_above_median)
			b->push_cost += b->target_node->index;
		else
			b->push_cost += lstack_a - (b->target_node->index);
		b = b->next;
	}
}
