/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:58:25 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/12 19:02:58 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	byte;

	str = (unsigned char *) s;
	byte = (unsigned char) c;
	while (n > 0)
	{
		*str = byte;
		str++;
		n--;
	}
	return (s);
}

static void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*pointer;

	if (size != 0)
	{
		if (nmemb > SIZE_MAX / size)
			return (0);
	}
	pointer = malloc(nmemb * size);
	if (pointer == 0)
		return (0);
	ft_bzero(pointer, nmemb * size);
	return (pointer);
}
