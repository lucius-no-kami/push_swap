/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:19:16 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/28 11:22:04 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_biggest(t_stack *head)
{
	long	max_val;

	max_val = LONG_MIN;
	while (head)
	{
		if (head->value > max_val)
			max_val = head->value;
		head = head->next;
	}
	return ((int)max_val);
}
