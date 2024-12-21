/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 11:14:28 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/21 11:22:47 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tmp;
}

void	sa(t_stack **a, int print)
{
	swap(a);
	if (print == 1)
		ft_printf("sa\n");
}

void	sb(t_stack **b, int print)
{
	swap(b);
	if (print == 1)
		ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b, int print)
{
	swap(a);
	swap(b);
	if (print == 1)
		ft_printf("ss\n");
}
