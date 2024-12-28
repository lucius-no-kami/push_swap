/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 10:42:09 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/28 11:23:20 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_stack **head)
{
	int	biggest_value;

	biggest_value = find_biggest(*head);
	if ((*head)->value == biggest_value)
		ra(head, true);
	else if ((*head)->value == biggest_value)
		rra(head, true);
	if ((*head)->value > (*head)->next->value)
		sa(head, true);
}
