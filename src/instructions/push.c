/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 13:23:01 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/22 14:19:43 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack **receiver, t_stack **sender)
{
	t_stack	*tmp;

	if (*sender == NULL)
		return ;
	tmp = *sender;
	*sender = tmp->next;
	if (*sender != NULL)
		(*sender)->previous = NULL;
	if (*receiver != NULL)
		(*receiver)->previous = tmp;
	tmp->next = *receiver;
	tmp->previous = NULL;
	*receiver = tmp;
}

void	pa(t_stack **a, t_stack **b, int print)
{
	push(a, b);
	if (print)
		ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b, int print)
{
	push(b, a);
	if (print)
		ft_printf("pb\n");
}
