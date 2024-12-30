/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 08:58:45 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/30 09:27:20 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack **receiver, t_stack **sender)
{
	t_stack	*node;

	if (!sender)
		return ;
	node = *sender;
	*sender = (*sender)->next;
	if (*sender)
		(*sender)->previous = NULL;
	node->previous = NULL;
	if (!*receiver)
	{
		*receiver = node;
		node->next = NULL;
	}
	else
	{
		node->next = *receiver;
		node->next->previous = node;
		*receiver = node;
	}
}

void	pa(t_stack **a, t_stack **b, bool flag)
{
	push(a, b);
	if (flag)
		ft_printf("pa\n");
}

void	pb(t_stack **b, t_stack **a, bool flag)
{
	push(b, a);
	if (flag)
		ft_printf("pb\n");
}
