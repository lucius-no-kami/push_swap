/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:10:02 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/30 09:19:06 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack **head)
{
	t_stack	*last;
	int		len;

	len = stack_len(*head);
	if (!*head || !head || len == 1)
		return ;
	last = find_last_node(*head);
	last->previous->next = NULL;
	last->next = *head;
	last->previous = NULL;
	*head = last;
	last->next->previous = last;
}

void	rra(t_stack **a, bool flag)
{
	reverse_rotate(a);
	if (flag == true)
		ft_printf("rra\n");
}

void	rrb(t_stack **b, bool flag)
{
	reverse_rotate(b);
	if (flag == true)
		ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b, bool flag)
{
	rra(a, !flag);
	rrb(b, !flag);
	if (flag)
		ft_printf("rrr\n");
}
