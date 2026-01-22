/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:39:11 by bastalze          #+#    #+#             */
/*   Updated: 2026/01/22 12:36:35 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <push_swap.h>

int	main(int argC, char **argv)
{
	int		i;
	s_list	*node;
	s_list	*head;

	node = malloc(sizeof(s_list));
	if (!node)
		return (0);
	node->data = *arV[1];
	head = node;
	node->next = node;
	i = 2;
	while(*argV[i] != 0)
	{
		node = malloc(sizeof(s_list));
		if (!node)
			return (0);
		node->data = *arV[i];
		node
	}
}
