/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 09:59:56 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/30 09:21:21 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **head)
{
	t_stack	*last;
	int		len;

	len = stack_len(*head);
	if (!*head || !head || len == 1)
		return ;
	last = find_last_node(*head);
	last->next = *head;
	*head = (*head)->next;
	(*head)->previous = NULL;
	last->next->previous = last;
	last->next->next = NULL;
}

void	ra(t_stack **a, bool flag)
{
	rotate(a);
	if (flag == true)
		ft_printf("ra\n");
}

void	rb(t_stack **b, bool flag)
{
	rotate(b);
	if (flag == true)
		ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b, bool flag)
{
	ra(a, !flag);
	rb(b, !flag);
	if (flag)
		ft_printf("rrr\n");
}
