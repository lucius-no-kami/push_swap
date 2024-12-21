/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 11:14:35 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/21 09:31:32 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_errors(t_stack **a)
{
	
}

static int	error_duplicate(t_stack *a, int n)
{
	t_stack	*tmp;

	while (a)
	{
		if (a->value == n)
			return (1);
		a = a->next;
	}
	return (0);
}

static int	error_syntax(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '0' && i == 0 && (str[i + 1] > '0' && str[i + 1] < '9'))
			return (1);
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

static void	append(t_stack *a, int n)
{
	t_stack	*last_node;
	t_stack	*new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
	{
		free_errors(a);
		ft_printf(RED"Error\n"RESET);
		exit(EXIT_FAILURE);
	}
	while (last_node)
		last_node = last_node->next;
	new_node->value = n;
	new_node->next = NULL;
	last_node->next = new_node;
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
