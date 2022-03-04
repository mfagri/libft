/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:36:31 by mfagri            #+#    #+#             */
/*   Updated: 2021/11/14 19:28:07 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *d, const char *s, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dst;

	i = 0;
	dst = (char *)d;
	if (!s[i] || dst == s)
		return ((char *)dst);
	while (dst[i] && len > i)
	{
		j = 0;
		while (s[j] && i + j < len && dst[i + j] == s[j])
		{
			if (s[j + 1] == '\0')
				return (dst + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
