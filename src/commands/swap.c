/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 08:59:44 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/30 09:31:09 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **head)
{
	int	len;

	len = stack_len(*head);
	if (!*head || !head || len == 1)
		return ;
	*head = (*head)->next;
	(*head)->previous->previous = *head;
	(*head)->previous->next = (*head)->next;
	if ((*head)->next)
		(*head)->next->previous = (*head)->previous;
	(*head)->next = (*head)->previous;
	(*head)->previous = NULL;
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
