/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:15:45 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/22 10:44:51 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **head)
{
	t_stack	*fnode;
	t_stack	*snode;
	t_stack	*last_node;

	if (!(*head) || !(*head)->next)
		return ;
	fnode = *head;
	snode = fnode->next;
	last_node = find_last_node(*head);
	last_node->next = fnode;
	fnode->previous = last_node;
	fnode->next = NULL;
	snode->previous = NULL;
	*head = snode;
}

void	ra(t_stack **a, int print)
{
	rotate(a);
	if (print == 1)
		ft_printf("ra\n");
}

void	rb(t_stack **b, int print)
{
	rotate(b);
	if (print == 1)
		ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b, int print)
{
	rotate(a);
	rotate(b);
	if (print)
		ft_printf("ss\n");
}
