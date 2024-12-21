/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 07:44:06 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/21 11:07:57 by luluzuri         ###   ########.fr       */
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
# include <limits.h>
# include "libft.h"
/* #include "mlx.h" */

typedef struct s_stack
{
	int				value;
	int				index;
	int				push_cost;
	int				bigger_median;
	int				cheapest;
	struct s_stack	*target_node;
	struct s_stack	*previous;
	struct s_stack	*next;
}	t_stack;

/* MAIN */
int		push_swap(void);

/* Stack */
void	init_stack(t_stack **a, char **av);
int		error_syntax(char *str);
int		error_duplicate(t_stack *a, int n);
void	free_errors(t_stack **a);
int		sorted(t_stack *a);
t_stack	*find_last_node(t_stack *head);

#endif
