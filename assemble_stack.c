/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assemble_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 10:24:12 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/18 20:17:18 by bastalze         ###   ########.fr       */
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

static int	array_size(char **argV)
{
	int	len;

	len = 0;
	while (argV[len])
		len++;
	return (len);
}

static int	create_stack(char **argV, int i, t_stack *a)
{
	int		nb;
	t_list	*new;

	while (argV[i])
	{
		if (!(is_valid(argV[i])))
			return (0);
		nb = ft_atoi(argV[i]);
		if (nb == 0)
			return (0);
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

int	assemble_stack(char **argV, t_stack *a)
{
	int		i;
	int		y_n_split;

	y_n_split = 0;
	if (argV[2] == 0)
	{
		argV = ft_split(argV[1], ' ');
		y_n_split = 1;
	}
	i = 0;
	if (y_n_split == 0)
		i++;
	i = create_stack(argV, i, a);
	if (i == 0)
		return (0);
	if (y_n_split == 1)
	{
		i = array_size(argV);
		ft_free(argV, i - 1);
	}
	return (1);
}
