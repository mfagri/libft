/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:48:54 by mfagri            #+#    #+#             */
/*   Updated: 2021/11/11 20:19:13 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*b;

	i = 0;
	if (!s || !f)
		return (NULL);
	b = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!b)
		return (NULL);
	while (s[i])
	{
		b[i] = f(i, s[i]);
		i++;
	}
	b[i] = 0;
	return (b);
}
