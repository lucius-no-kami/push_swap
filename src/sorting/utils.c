/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:09:28 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/24 18:39:14 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	get_stack_len(t_stack *stack)
{
	size_t	count;

	count = 0;
	while (stack)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

t_stack	*find_biggest(t_stack *head)
{
	int		max_value;
	t_stack	*biggest;

	if (!head)
		return (NULL);
	max_value = INT_MIN;
	while (head)
	{
		if (head->value > max_value)
		{
			biggest = head;
			max_value = head->value;
		}
		head = head->next;
	}
	return (biggest);
}
