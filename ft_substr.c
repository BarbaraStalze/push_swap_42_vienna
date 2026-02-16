/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bastalze <bastalze@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 20:58:29 by bastalze          #+#    #+#             */
/*   Updated: 2026/02/13 14:15:43 by bastalze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != 0)
		len ++;
	return (len);
}

static size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	while (i + 1 < size && src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (srclen);
}

static char	*ft_strdup(const char *s)
{
	char	*np;
	int		len;

	len = ft_strlen(s);
	np = malloc(len + 1);
	if (np == 0)
	{
		return (0);
	}
	len = ft_strlcpy(np, s, (size_t)len + 1);
	return (np);
}

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
