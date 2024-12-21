/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 07:44:06 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/21 13:37:10 by luluzuri         ###   ########.fr       */
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

/* Main */
int		push_swap(void);

/* Instructions */
void	sa(t_stack **a, int print);
void	sb(t_stack **b, int print);
void	ss(t_stack **a, t_stack **b, int print);

/* Stack */
void	init_stack(t_stack **head, char **av);
t_stack	*find_last_node(t_stack *head);
int		stack_len(t_stack *head);
int		error_syntax(char *str);
int		error_duplicate(t_stack *head, int n);
void	free_errors(t_stack **head);
void	free_stack(t_stack	**head);

/* Sorting */
int		sorted(t_stack *head);

#endif
