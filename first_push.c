/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:45:27 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/18 18:26:07 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	first_push(t_stack *a, t_stack *b)
{
	int		i;
	int		og_size;
	int		mid_point;

	og_size = a->size;
	mid_point = og_size / 2;
	i = 1;
	while (a->size > 3)
	{
		if (a->head->index <= 3)
			ft_ra(a);
		else
			ft_pb(a, b);
		if (b->head && b->head->next && b->head->next->index <= mid_point
			&& b->head->index > mid_point)
			ft_rb(b);
		ft_lstsize(a);
	}
}
