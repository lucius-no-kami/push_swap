/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotating.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 08:46:32 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/31 08:14:38 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	end_rotate(t_stack **head, t_stack *node, char flag)
{
	set_median(*head);
	while (*head != node)
	{
		if (flag == 'a')
		{
			if (node->is_above_median)
				ra(head, true);
			else
				rra(head, true);
		}
		else if (flag == 'b')
		{
			if (node->is_above_median)
				rb(head, true);
			else
				rrb(head, true);
		}
	}
}

/*void	double_rotate(t_stack **a, t_stack **b, t_stack *cnode)
{
	while ((*a != cnode->target_node) && (*b != cnode))
		rr(a, b, true);
	set_median(*b);
	set_median(*a);
}

void	double_rrotate(t_stack **a, t_stack **b, t_stack *cnode)
{
	while ((*a != cnode->target_node) && (*b != cnode))
		rrr(a, b, true);
	set_median(*b);
	set_median(*a);
}*/