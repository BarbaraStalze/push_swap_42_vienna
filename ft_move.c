/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 12:50:38 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/06 18:19:28 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	push(t_stack *one, t_stack *two)
{
	t_list	mover;
	
	mover = one->head;
	if ()
		two->head->prev = mover;
		mover->next = two->head;
	if (!one->head->next)
	{
		mover->next = two->head;
		two->head = mover;
		two->head->prev = mover;
		one->head = NULL;
		one->tail = NULL;
	}
	else if (one->head && two->head)
	{
		one->head = one->head->next;
		mover->next = two->head;
		two->head->prev = mover;
		two->head = mover;
		one->head->prev = NULL;
	}
	else
	{
		two->head = mover;
		two->tail = mover;
		one->head = one->head->next;
		one->head->prev = NULL;
	}
}

void	swap(t_stack *stack)
{
	
}

void	bottoms_up(t_stack *stack)
{
	
}

void	top_down(t_stack *stack)
{
	
}
