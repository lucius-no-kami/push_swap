/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:52:45 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/18 10:53:22 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	(void)av;
	if (ac == 1)
	{
		ft_printf(RED"Test\n"RESET);
		return (0);
	}
	push_swap();
	return (0);
}
