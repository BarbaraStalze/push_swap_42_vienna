/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 16:45:27 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/10 17:21:49 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	first_push(t_stack *a, t_stack *b)
{
	int		i;
	int		og_size;

	og_size = a->size;
	i = 1;
	while (i < og_size / 2)
	{
		if (a->head->index > og_size / 2)
		{
			ft_pb(a, b);
			i++;
		}
		else
			ft_ra(a);
	}
	while (i <= og_size - 3)
	{
		if (a->head->index <= 3)
			ft_ra(a);
		else
		{
			ft_pb(a, b);
			i++;
		}
	}
}
