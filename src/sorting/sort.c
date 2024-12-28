/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:09:25 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/22 14:25:03 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_stack *a)
{
	if (!a)
		return (1);
	while (a->next)
	{
		if (a->value > a->next->value)
			return (0);
		a = a->next;
	}
	return (1);
}

void	sort_three(t_stack **a)
{
	t_stack	*biggest;

	biggest = find_biggest(*a);
	if (biggest == *a)
		ra(a, 1);
	else if ((*a)->next == biggest)
		rra(a, 1);
	if ((*a)->value > (*a)->next->value)
		sa(a, 1);
}
