/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 07:42:46 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/30 08:36:22 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack	*head)
{
	while (head)
	{
		ft_printf("%d ", head->value);
		head = head->next;
	}
	ft_printf("\n");
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (0);
	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		stack_init(&a, av, ac == 2);
	}
	else
		stack_init(&a, av + 1, ac == 2);
	if (!sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, true);
		else if (stack_len(a) == 3)
			three_sort(&a);
		else
			push_swap(&a, &b);
	}
	free_stack(&a);
	return (0);
}
