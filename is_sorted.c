/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 10:39:08 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/05 19:06:30 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int is_sorted(t_stack stack);
{
	t_list	*node;

	node = stack->head;
	while (node->next)
	{
		if (node < node->next)
			return (1);
		node = node->next;
	}
	return (0);
}
