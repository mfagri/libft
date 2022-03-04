/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 12:30:20 by mfagri            #+#    #+#             */
/*   Updated: 2021/11/14 16:52:05 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s1;
	unsigned int	b;
	size_t			l;

	l = 0;
	if (!s)
		return (NULL);
	if (len > ft_strlen(s + start))
	{
		l = ft_strlen(s + start);
		len = l;
	}
	b = 0;
	s1 = (char *)malloc((len + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	while (b < len && start < ft_strlen(s))
	{
		s1[b] = s[start];
		b++;
		start++;
	}
	s1[b] = '\0';
	return (s1);
}
