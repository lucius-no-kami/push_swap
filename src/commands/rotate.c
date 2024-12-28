/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 09:59:56 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/28 10:47:15 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **head)
{
	t_stack	*first;
	t_stack	*last;

	if (!head || !*head)
		return ;
	first = *head;
	*head = (*head)->next;
	(*head)->previous = NULL;
	last = find_last_node(*head);
	last->next = first;
	first->previous = last;
	first->next = NULL;
}

void	ra(t_stack **a, bool flag)
{
	rotate(a);
	if (flag)
		ft_printf("ra\n");
}

void	rb(t_stack **b, bool flag)
{
	rotate(b);
	if (flag)
		ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b, bool flag)
{
	ra(a, false);
	rb(b, false);
	if (flag)
		ft_printf("rrr\n");
}
