/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 08:59:44 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/28 10:47:04 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **head)
{
	t_stack	*tmp;

	if (!head || !*head)
		return ;
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	(*head)->previous = tmp;
	tmp->previous = NULL;
	tmp->next = (*head);
	(*head) = tmp;
}

void	sa(t_stack **a, bool flag)
{
	swap(a);
	if (flag)
		ft_printf("sa\n");
}

void	sb(t_stack **b, bool flag)
{
	swap(b);
	if (flag)
		ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b, bool flag)
{
	sa(a, false);
	sb(b, false);
	if (flag)
		ft_printf("ss\n");
}
