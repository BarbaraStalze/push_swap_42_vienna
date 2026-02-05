/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assemble_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:24:12 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/05 15:20:38 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	add_to_stack(t_stack *stack, t_list *new)
{
	if (!stack || !new)
		return ;
	if (stack->head)
	{
		stack->tail->next = new;
		new->prev = stack->tail;
		stack->tail = new;
	}
	else
	{
		stack->head = new;
		stack->tail = new;
	}
}

t_stack	*assemble_stack(char **argV, t_stack *a)
{
	int		i;
	int		nb;
	int		y_n_split;
	t_list	*new;

	nb_array = NULL;
	y_n_split = 0;
	if (argV[2] == 0)
	{
		argV = ft_split(argV[1], ' ');
		y_n_split = 1;
	}
	i = 0;
	if (y_n_split == 0)
		i++;
	while (argV[i])
	{
		if (is_valid(argV[i] == 0) 
			return (0);
		nb = ft_atoi(argV[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			return (0);
		new = new_node(nb);
		add_to_stack(a, new);
	}
	if (y_n_split == 1)
		ft_free(argV);
}
