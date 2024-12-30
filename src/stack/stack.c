/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 08:04:22 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/28 09:52:18 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	append_node(t_stack **head, int nb)
{
	t_stack	*new;
	t_stack	*last;

	if (!head)
		return ;
	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->next = NULL;
	new->value = nb;
	if (!(*head))
	{
		*head = new;
		new->previous = NULL;
	}
	else
	{
		last = find_last_node(*head);
		last->next = new;
		new->previous = last;
	}
}

void	stack_init(t_stack **a, char **args, bool flag)
{
	int		i;
	long	nb;

	i = 0;
	while (args[i])
	{
		if (error_syntax(args[i]))
			free_error(a, args, flag);
		nb = ft_atol(args[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			free_error(a, args, flag);
		if (repet_error(*a, (int)nb))
			free_error(a, args, flag);
		append_node(a, (int)nb);
		i++;
	}
	if (flag == true)
		free_str(args);
}
