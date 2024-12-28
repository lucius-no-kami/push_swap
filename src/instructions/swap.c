/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:14:28 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/21 13:00:26 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **stack)
{
	t_stack	*fnode;
	t_stack	*snode;

	if (!(*stack) || !((*stack)->next))
		return ;
	fnode = *stack;
	snode = (*stack)->next;
	if (snode->next != NULL)
		fnode->next = snode->next;
	else
		fnode->next = NULL;
	fnode->previous = snode;
	snode->previous = NULL;
	snode->next = fnode;
	*stack = snode;
}

void	sa(t_stack **a, int print)
{
	swap(a);
	if (print == 1)
		ft_printf("sa\n");
}

void	sb(t_stack **b, int print)
{
	swap(b);
	if (print == 1)
		ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b, int print)
{
	swap(a);
	swap(b);
	if (print == 1)
		ft_printf("ss\n");
}
