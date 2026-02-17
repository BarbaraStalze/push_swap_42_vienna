/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:31:27 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/17 12:42:33 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static t_list	*find_smallest(t_stack *a)
{
	t_list	*smallest;
	t_list	*node;

	node = a->head;
	while (node)
	{
		if (node->index == 1)
		{
			smallest = node;
			return (smallest);
		}
		else
			node = node->next;
	}
	return (0);
}

static void	total_cost(t_list *node_a, t_list *node_b)
{
	int		ttc_a;
	int		ttc_b;

	node_b->target = node_a;
	if (node_a->ttc < 0)
		ttc_a = node_a->ttc * (-1);
	else
		ttc_a = node_a->ttc;
	if (node_b->ttc < 0)
		ttc_b = node_b->ttc * (-1);
	else
		ttc_b = node_b->ttc;
	node_b->total = ttc_a + ttc_b;
}

void	find_target(t_stack *a, t_list *node_b)
{
	t_list	*node_a;
	t_list	*smallest;

	smallest = find_smallest(a);
	while (node_b)
	{
		node_a = smallest->next;
		node_b->total = 0;
		while (node_a != smallest)
		{
			if (node_a->index > node_b->index)
			{
				total_cost(node_a, node_b);
				break ;
			}
			node_a = node_a->next;
			if (node_a == NULL)
				node_a = a->head;
		}
		if (!node_b->total)
			total_cost(smallest, node_b);
		node_b = node_b->next;
	}
}
