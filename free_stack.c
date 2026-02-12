/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 16:40:16 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/12 20:37:05 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_list	*node;
	t_list	*temp;

	if (!stack->head)
		return ;
	node = stack->head;
	while (node)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	stack->head = NULL;
}
