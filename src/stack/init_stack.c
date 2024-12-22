/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:14:35 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/22 10:11:40 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	append(t_stack **a, int n)
{
	t_stack	*last_node;
	t_stack	*new_node;

	if (!a)
		return ;
	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->value = n;
	new_node->next = NULL;
	new_node->cheapest = 0;
	if (!(*a))
	{
		*a = new_node;
		new_node->previous = NULL;
	}
	else
	{
		last_node = find_last_node(*a);
		last_node->next = new_node;
		new_node->previous = last_node;
	}
}

void	init_stack(t_stack **a, char **av)
{
	long	n;
	int		i;

	i = 0;
	while (av[i])
	{
		if (error_syntax(av[i]))
			free_errors(a);
		n = ft_atol(av[i]);
		if (n > INT_MAX || n < INT_MIN)
			free_errors(a);
		if (error_duplicate(*a, (int)n))
			free_errors(a);
		append(a, (int)n);
		i++;
	}
}
