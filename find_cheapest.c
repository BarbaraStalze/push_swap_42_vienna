/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cheapest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:33:01 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/12 18:47:59 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_list	*find_cheapest(t_stack *b)
{
	t_list	*node;
	t_list	*cheapest;

	node = b->head;
	cheapest = node;
	while (node->next)
	{
		node = node->next;
		if (node->total < cheapest->total)
			cheapest->total = node->total;
	}
	return (cheapest);
}
