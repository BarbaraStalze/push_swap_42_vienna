/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:07:38 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/18 15:02:19 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_ra(t_stack *a)
{
	top_down(a);
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack *b)
{
	top_down(b);
	write(1, "rb\n", 3);
}

void	ft_rr(t_stack *a, t_stack *b)
{
	top_down(a);
	top_down(b);
	write(1, "rr\n", 3);
}
