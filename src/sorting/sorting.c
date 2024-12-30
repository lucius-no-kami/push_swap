/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:42:09 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/30 12:51:41 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_cheapest(t_stack *head)
{
	t_stack	*cheapest;
	long	cost;

	if (!head)
		return ;
	cost = LONG_MAX;
	while (head)
	{
		if (head->push_cost < cost)
		{
			cost = head->push_cost;
			cheapest = head;
		}
		head = head->next;
	}
	cheapest->cheapest = true;
}

t_stack	*find_cheapest(t_stack *head)
{
	if (!head)
		return (NULL);
	while (head)
	{
		if (head->cheapest)
			return (head);
		head = head->next;
	}
	return (NULL);
}

void	move_to_a(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	cheapest = find_cheapest(*b);
	end_rotate(b, cheapest, 'b');
	end_rotate(a, cheapest->target_node, 'a');
	pa(a, b, true);
}

void	three_sort(t_stack **head)
{
	int	biggest_value;

	biggest_value = find_biggest(*head);
	if ((*head)->value == biggest_value)
		ra(head, true);
	else if ((*head)->next->value == biggest_value)
		rra(head, true);
	if ((*head)->value > (*head)->next->value)
		sa(head, true);
}

void	five_sort(t_stack **a, t_stack **b)
{
	while (stack_len(*a) > 3)
	{
		init_node(*a, *b);
		end_rotate(a, find_smallest(*a), 'a');
		pb(b, a, true);
	}
}

// Error with this
/*if (cheapest->is_above_median \
	&& cheapest->target_node->is_above_median)
		double_rotate(a, b, cheapest);
	else if (!(cheapest->is_above_median) \
	&& !(cheapest->target_node->is_above_median))
		double_rrotate(a, b, cheapest);*/