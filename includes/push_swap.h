/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luluzuri <luluzuri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 07:43:35 by luluzuri          #+#    #+#             */
/*   Updated: 2024/12/28 11:22:32 by luluzuri         ###   ########.fr       */
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

# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>
# include <unistd.h>
# include "libft.h"

typedef struct s_stack
{
	int				value;
	int				current_pos;
	int				index;
	int				push_cost;
	bool			is_above_median;
	bool			cheapest;
	struct s_stack	*target_node;
	struct s_stack	*previous;
	struct s_stack	*next;
}	t_stack;

/* Error management */
int		error_syntax(char *str);
int		repet_error(t_stack *a, int nb);
void	free_stack(t_stack **head);
void	free_str(char **str);
void	free_error(t_stack **head, char **args, bool flag);

/* Commands */
void	sa(t_stack **a, bool flag);
void	sb(t_stack **b, bool flag);
void	ss(t_stack **a, t_stack **b, bool flag);

void	pa(t_stack **a, t_stack **b, bool flag);
void	pb(t_stack **b, t_stack **a, bool flag);

void	ra(t_stack **a, bool flag);
void	rb(t_stack **b, bool flag);
void	rr(t_stack **a, t_stack **b, bool flag);

void	rra(t_stack **a, bool flag);
void	rrb(t_stack **b, bool flag);
void	rrr(t_stack **a, t_stack **b, bool flag);

/* Stack management */
void	stack_init(t_stack **a, char **args, bool flag);
t_stack	*find_last_node(t_stack *head);
int		stack_len(t_stack *head);

/* Sorting */
bool	sorted(t_stack *head);
void	three_sort(t_stack **a);
int		find_biggest(t_stack *head);

#endif