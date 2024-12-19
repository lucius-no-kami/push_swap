/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 07:43:12 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/19 18:09:06 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack	**stack)
{
	t_stack	*first_pos;
	t_stack	*second_pos;

	if (!(*stack)->value || !(*stack)->next)
		return ;
	first_pos = *stack;
	second_pos = (*stack)->next;
	first_pos->next = second_pos->next;
	second_pos->next = first_pos;
	*stack = second_pos;
}

void	sb(t_stack	**stack)
{
	sa(stack);
}

void	ss(t_stack **stackA, t_stack **stackB)
{
	sa(stackA);
	sb(stackB);
}
