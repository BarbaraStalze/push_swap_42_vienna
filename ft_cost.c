/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:25:42 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/12 19:18:12 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_cost(t_stack *stack)
{
	int		i;
	t_list	*node;

	ft_lstsize(stack);
	node = stack->head;
	i = 0;
	while (i <= stack->size / 2)
	{
		node->ttc = i;
		i++;
		node = node->next;
	}
	if (stack->size % 2 == 0)
		i = ((stack->size / 2) - 1) * (-1);
	else
		i = (stack->size / 2) * (-1);
	while (i)
	{
		node->ttc = i;
		i++;
		node = node->next;
	}
}
