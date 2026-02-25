/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:59:07 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/24 16:12:25 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

long	ft_atoi(const char *nptr)
{
	int		i;
	int		minus;
	long	rtrn;
	int		too_big;

	rtrn = 0;
	too_big = 0;
	minus = 1;
	i = 0;
	if (nptr[i] == '-')
	{
		minus = (-1);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		rtrn = rtrn * 10 + (nptr[i] - 48);
		i++;
		too_big++;
	}
	rtrn = rtrn * minus;
	return (rtrn);
}
