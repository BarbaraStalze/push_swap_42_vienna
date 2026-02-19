/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:59:07 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/19 12:18:47 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		minus;
	long	rtrn;
	int		too_big;

	too_big = 0;
	minus = 1;
	i = 0;
	if (nptr[i] == '-')
	{
		minus = (-1);
		i++;
	}
	rtrn = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		rtrn = rtrn * 10 + (nptr[i] - 48);
		i++;
		too_big++;
	}
	rtrn = rtrn * minus;
	if (rtrn > INT_MAX || rtrn < INT_MIN || too_big > 11)
		return (0);
	else
		return (rtrn);
}
