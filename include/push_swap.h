/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 07:44:06 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/19 18:07:50 by luluzuri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* colors */
# define RED			"\033[0;31m"
# define WHITE			"\x1B[37m"
# define BLACK          "\033[0;30m"
# define GREEN          "\033[0;32m"
# define MAGENTA        "\033[0;35m"
# define CYAN           "\033[0;36m"
# define RESET          "\033[0m"

# include <stdio.h>
# include "libft.h"
/* #include "mlx.h" */

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

int		push_swap(void);

/* SWAP */
void	sa(t_stack	**stack);
void	sb(t_stack	**stack);
void	ss(t_stack **stackA, t_stack **stackB);

#endif
