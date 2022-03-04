/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:07:50 by mfagri            #+#    #+#             */
/*   Updated: 2021/11/08 13:39:30 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	len;

	len = ft_strlen(s1) + 1;
	s = malloc(len * sizeof(char));
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1, len);
	return (s);
}
