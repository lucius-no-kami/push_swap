/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 10:17:42 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/21 12:48:37 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_len(t_stack *head)
{
	int		count;

	if (!head)
		return (0);
	if (head->next == NULL)
		return (1);
	count = 1;
	while (head->next != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}

void	free_stack(t_stack	**head)
{
	t_stack	*tmp;

	if (!head)
		return ;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}

void	free_errors(t_stack **head)
{
	free_stack(head);
	ft_printf(RED"Error\n"RESET);
	exit(EXIT_FAILURE);
}

t_stack	*find_last_node(t_stack *head)
{
	t_stack	*current;

	current = head;
	while (current->next != NULL)
		current = current->next;
	return (current);
}
