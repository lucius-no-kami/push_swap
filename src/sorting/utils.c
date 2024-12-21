/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 14:09:28 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/21 14:12:39 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_biggest(t_stack *head)
{
	int		max_value;
	t_stack	*biggest;

	if (!head)
		return ;
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
