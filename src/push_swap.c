/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 08:39:25 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/22 09:01:43 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *a)
{
	if (a == NULL)
		return ;
	ft_printf("Stack value: %d\n", a->value);
	print_stack(a->next);
}

int	push_swap(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (1);
	if (ac == 2)
		av = ft_split(av[1], ' ');
	init_stack(&a, av + 1);
	/*if (!sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, 1);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			turk_algorithm(&a, &b);
	}*/
	print_stack(a);
	free_stack(&a);
	return (0);
}
