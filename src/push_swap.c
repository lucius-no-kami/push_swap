/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:44:20 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/30 10:13:05 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_node(t_stack *a, t_stack *b)
{
	set_median(a);
	set_median(b);
	set_target(a, b);
	set_cost(a, b);
	set_cheapest(b);
}

void	push_swap(t_stack **a, t_stack **b)
{
	int		lstack_a;
	t_stack	*smallest;

	lstack_a = stack_len(*a);
	if (lstack_a == 5)
		five_sort(a, b);
	else
		while (lstack_a-- > 3)
			pb(b, a, true);
	three_sort(a);
	while (*b)
	{
		init_node(*a, *b);
		move_to_a(a, b);
	}
	set_median(*a);
	smallest = find_smallest(*a);
	if (smallest->is_above_median)
		while (*a != smallest)
			ra(a, true);
	else
		while (*a != smallest)
			rra(a, true);
}
