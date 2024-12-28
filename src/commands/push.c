/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 08:58:45 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/28 10:47:52 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack **receiver, t_stack **sender)
{
	t_stack	*tmp;

	if (!sender || !*sender)
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
