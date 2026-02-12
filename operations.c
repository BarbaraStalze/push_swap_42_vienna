/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:48:54 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/12 21:08:09 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_sa(t_stack *a)
{
	swap(a);
	write(1, "sa", 2);
}

void	ft_sb(t_stack *b)
{
	swap(b);
	write(1, "sb", 2);
}

void	ft_ss(t_stack *one, t_stack *two)
{
	swap(one);
	swap(two);
	write(1, "ss", 2);
}

void	ft_pa(t_stack *a, t_stack *b)
{
	push(b, a);
	write(1, "pa", 2);
}

void	ft_pb(t_stack *a, t_stack *b)
{
	push(a, b);
	write(1, "pb", 2);
}
