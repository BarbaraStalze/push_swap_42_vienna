/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:39:11 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/23 16:22:08 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	to_top_b(t_stack *b, t_list *cheapest)
{
	while (cheapest->ttc > 0)
	{
		ft_rb(b);
		cheapest->ttc--;
	}
	while (cheapest->ttc < 0)
	{
		ft_rrb(b);
		cheapest->ttc++;
	}
}

static void	to_top_a(t_stack *a, t_list *smallest)
{
	while (smallest->ttc > 0)
	{
		ft_ra(a);
		smallest->ttc--;
	}
	while (smallest->ttc < 0)
	{
		ft_rra(a);
		smallest->ttc++;
	}
}

static void	make_move(t_stack *a, t_stack *b, t_list *cheapest)
{
	if (b->head != cheapest)
		to_top_b(b, cheapest);
	if (cheapest->target != a->head)
		to_top_a(a, cheapest->target);
	ft_pa(a, b);
}

static void	ft_sorting(t_stack *a, t_stack *b)
{
	static t_list	*cheapest;
	static t_list	*smallest;

	if (a->size <= 3)
	{
		sort_few(a);
		return ;
	}
	first_push(a, b);
	sort_few(a);
	smallest = a->head;
	while (b->head)
	{
		ft_cost(a);
		ft_cost(b);
		find_target(a, b->head);
		cheapest = find_cheapest(b);
		make_move(a, b, cheapest);
	}
	ft_cost(a);
	to_top_a(a, smallest);
}

int	main(int argc, char **argv)
{
	int				check1;
	int				check2;
	static t_stack	a;
	static t_stack	b;

	if (argc < 2)
		return (0);
	check1 = assemble_stack(argv, &a);
	check2 = ft_indexing(&a);
	if (!check1 || check2)
	{
		free_stack(&a);
		write(2, "Error\n", 6);
		return (1);
	}
	if (is_sorted(&a) == 0)
		return (free_stack(&a), 0);
	ft_sorting(&a, &b);
	free_stack(&a);
}
