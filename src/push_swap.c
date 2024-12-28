/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 08:39:25 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/24 13:29:48 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* A SUPPRIMER */
static void	print_stack(t_stack *a)
{
	if (a == NULL)
		return ;
	ft_printf("Stack value: %d\n", a->value);
	print_stack(a->next);
}

static void	check_and_sort(t_stack **a, t_stack **b, char **av)
{
	(void)b;
	init_stack(a, av);
	if (!sorted(*a))
	{
		if (stack_len(*a) == 2)
			sa(a, 1);
		else if (stack_len(*a) == 3)
			sort_three(a);
		else
			turk_algorithm(a, b);
	}
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
	else
		av = av + 1;
	check_and_sort(&a, &b, av);
	return (0);
}
