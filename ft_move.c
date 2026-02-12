/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 12:50:38 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/12 19:13:32 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	push(t_stack *one, t_stack *two)
{
	t_list	*mover;

	mover = one->head;
	one->head = one->head->next;
	mover->next = two->head;
	if (!one->head->next)
	{
		two->head->prev = mover;
		one->tail = NULL;
	}
	else if (one->head && two->head)
		two->head->prev = mover;
	else
		two->tail = mover;
	two->head = mover;
	if (one->head)
		one->head->prev = NULL;
}

void	swap(t_stack *stack)
{
	int		temp_data;
	int		temp_index;
	int		temp_ttc;
	t_list	*temp_target;
	int		temp_total;

	temp_data = stack->head->next->data;
	temp_index = stack->head->next->index;
	temp_ttc = stack->head->next->ttc;
	temp_target = stack->head->next->target;
	temp_total = stack->head->next->total;
	stack->head->next->data = stack->head->data;
	stack->head->next->index = stack->head->index;
	stack->head->next->ttc = stack->head->ttc;
	stack->head->next->target = stack->head->target;
	stack->head->next->total = stack->head->total;
	stack->head->data = temp_data;
	stack->head->index = temp_index;
	stack->head->ttc = temp_ttc;
	stack->head->target = temp_target;
	stack->head->total = temp_total;
}

void	bottoms_up(t_stack *stack)
{
	t_list	*temp;

	temp = stack->tail;
	stack->tail = stack->tail->prev;
	stack->tail->next = NULL;
	temp->next = stack->head;
	temp->prev = NULL;
	stack->head->prev = temp;
	stack->head = temp;
}

void	top_down(t_stack *stack)
{
	t_list	*temp;

	temp = stack->head;
	stack->head = stack->head->next;
	stack->head->prev = NULL;
	temp->prev = stack->tail;
	temp->next = NULL;
	stack->tail->next = temp;
	stack->tail = temp;
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
	int		test[] = {56, 345, -1, 0, 1, 34444, 4545};
	t_list	*node;
	t_stack	*stack;
	int 	i = 0;

	stack = calloc(1, sizeof(t_stack));
	while (i != 7)
	{
		node = new_node(test[i]);
		add_to_stack(stack, node);
		i++;
	}
	i = 0;
	swap(stack);
	node = stack->head;
	printf("Stack A:\n");
	while (node)
	{
		printf("%d\n", node->data);
		node = node->next;
	}
	free(stack);
}

int main()
{
	int		test[] = {56, 345, -1, 0, 1, 34444, 4545};
	int		test2[] = {3, 4, 5};
	t_list	*node;
	t_stack	*stack;
	t_stack *stack2;
	int 	i = 0;

	stack = calloc(1, sizeof(t_stack));
	stack2 = calloc(1, sizeof(t_stack));
	while (i != 7)
	{
		node = new_node(test[i]);
		add_to_stack(stack, node);
		i++;
	}
	i = 0;
	while (i != 3)
	{
		node = new_node(test2[i]);
		add_to_stack(stack2, node);
		i++;
	}
	push(stack, stack2);
	node = stack->head;
	printf("Stack A:\n");
	while (node)
	{
		printf("%d\n", node->data);
		node = node->next;
	}
	node = stack2->head;
	printf("Stack B:\n");
	while (node)
	{
		printf("%d\n", node->data);
		node = node->next;
	}
	free(stack);
	free(stack2);
}
*/
