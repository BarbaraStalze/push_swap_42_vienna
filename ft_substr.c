/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 20:58:29 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/12 21:00:10 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subp;
	unsigned int	slen;
	int				i;

	slen = ft_strlen(s);
	if (start > slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	subp = malloc(len + 1);
	if (!subp)
		return (0);
	i = 0;
	while (s[start] != 0 && len > 0)
	{
		subp[i] = s[start];
		i++;
		start++;
		len--;
	}
	subp[i] = 0;
	return (subp);
}
