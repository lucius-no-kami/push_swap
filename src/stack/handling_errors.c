/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handling_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 10:30:30 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/22 10:03:30 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_duplicate(t_stack *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->value == n)
			return (1);
		a = a->next;
	}
	return (0);
}

int	error_syntax(char *str)
{
	int	i;

	i = 0;
	if (!(str[i] == '-' || str[i] == '+' || (str[i] >= '0' && str[i] <= '9')))
		return (1);
	if ((str[i] == '-' || str[i] == '+') && \
	!(str[i + 1] >= '0' && str[i + 1] <= '9'))
		return (1);
	while (str[++i])
		if (str[i] < '0' || str[i] > '9')
			return (1);
	return (0);
}
