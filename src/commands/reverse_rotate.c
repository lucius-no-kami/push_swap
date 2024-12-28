/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:10:02 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/28 10:47:36 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack **head)
{
	t_stack	*first;
	t_stack	*last;

	if (!head || !*head)
		return ;
	first = *head;
	last = find_last_node(*head);
	first->previous = last;
	last->previous->next = NULL;
	last->previous = NULL;
	last->next = first;
	*head = last;
}

void	rra(t_stack **a, bool flag)
{
	reverse_rotate(a);
	if (flag)
		ft_printf("rra\n");
}

void	rrb(t_stack **b, bool flag)
{
	reverse_rotate(b);
	if (flag)
		ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b, bool flag)
{
	rra(a, false);
	rrb(b, false);
	if (flag)
		ft_printf("rrr\n");
}
