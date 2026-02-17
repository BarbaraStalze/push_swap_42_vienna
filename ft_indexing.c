/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 11:06:21 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/17 13:55:01 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_lstsize(t_stack *a)
{
	int		counter;
	t_list	*currentnode;

	counter = 0;
	currentnode = a->head;
	while (currentnode != NULL)
	{
		currentnode = currentnode->next;
		counter++;
	}
	a->size = counter;
}

static int	compare(t_list *current, t_list *node)
{
	if (current->data < node->data)
		current->index--;
	else if (current->data == node->data)
		return (1);
	return (0);
}

int	ft_indexing(t_stack *a)
{
	t_list	*node;
	t_list	*current;
	int		check;

	ft_lstsize(a);
	current = a->head;
	check = 0;
	while (current)
	{
		node = a->head;
		current->index = a->size;
		while (node && check != 1)
		{
			if (node != current)
			{
				check = compare(current, node);
				if (check == 1)
					return (check);
			}
			node = node->next;
		}
		current = current->next;
	}
	return (0);
}
/*
t_list	*new_node(int data)
{
	t_list	*node;

	node = calloc(1, sizeof(t_list));
	if (!node)
		return (0);
	node->data = data;
	return (node);
}

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

#include <stdio.h>

int main()
{
	int		test[] = {8, 3, 2, 9};
	t_list	*node;
	t_stack	*stack;
	int 	i = 0;

	stack = calloc(1, sizeof(t_stack));
	while (i != 4)
	{
		node = new_node(test[i]);
		add_to_stack(stack, node);
		i++;
	}
	ft_indexing(stack);
	printf("Amount numbers: %d\n", stack->size);
	node = stack->head;
	while (node)
	{
		printf("%d %d\n", node->data, node->index);
		node = node->next;
	}
}
*/
