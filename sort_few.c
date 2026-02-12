/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_few.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:55:55 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/12 21:11:37 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	ft_sort_3(t_stack *stack, t_list *node)
{
	if (node->index == 2 && node->next->index == 3
		&& node->next->next->index == 1)
		ft_rra(stack);
	else if (node->index == 3 && node->next->index == 1
		&& node->next->next->index == 2)
		ft_ra(stack);
	else if (node->index == 2 && node->next->index == 1
		&& node->next->next->index == 3)
		ft_sa(stack);
	else if (node->index == 3 && node->next->index == 2
		&& node->next->next->index == 1)
	{
		ft_sa(stack);
		ft_rra(stack);
	}
	else if (node->index == 1 && node->next->index == 3
		&& node->next->next->index == 2)
	{
		ft_sa(stack);
		ft_ra(stack);
	}
}

void	sort_few(t_stack *stack)
{
	ft_lstsize(stack);
	if (stack->size == 2)
		ft_sa(stack);
	else if (stack->size == 3)
		ft_sort_3(stack, stack->head);
}
