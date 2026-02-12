/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:14:28 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/12 20:41:39 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_rra(t_stack *a)
{
	bottoms_up(a);
	write(1, "rra", 3);
}

void	ft_rrb(t_stack *b)
{
	bottoms_up(b);
	write(1, "rrb", 3);
}

void	ft_rrr(t_stack *a, t_stack *b)
{
	bottoms_up(a);
	bottoms_up(b);
	write(1, "rrr", 3);
}
