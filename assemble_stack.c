/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assemble_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:24:12 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/23 16:48:46 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	add_to_stack(t_stack *stack, t_list *new)
{
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

static int	array_size(char **argv)
{
	int	len;

	len = 0;
	while (argv[len])
		len++;
	return (len);
}

static int	create_stack(char **argv, int i, t_stack *a)
{
	int		nb;
	t_list	*new;

	while (argv[i])
	{
		if (!(is_valid(argv[i])))
			return (0);
		nb = ft_atoi(argv[i]);
		if (nb == 0)
		{
			free_stack(a);
			return (0);
		}
		new = new_node(nb);
		if (!new)
		{
			free_stack(a);
			return (0);
		}
		add_to_stack(a, new);
		i++;
	}
	return (1);
}

int	assemble_stack(char **argv, t_stack *a)
{
	int		i;
	int		y_n_split;

	y_n_split = 0;
	if (argv[2] == 0)
	{
		argv = ft_split(argv[1], ' ');
		if (!argv)
			return (0);
		if (argv[0] == 0)
			return (ft_free(argv, array_size(argv) - 1), 0);
		y_n_split = 1;
	}
	i = 0;
	if (y_n_split == 0)
		i++;
	i = create_stack(argv, i, a);
	if (y_n_split == 1)
		ft_free(argv, array_size(argv) - 1);
	return (i);
}
