/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfagri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:35:53 by mfagri            #+#    #+#             */
/*   Updated: 2021/11/06 18:23:15 by mfagri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = -1;
	if (dst > src)
		while (len--)
			*(char *)(dst + len) = *(char *)(src + len);
	else if (dst < src)
		while (++i < len)
			*(char *)(dst + i) = *(char *)(src + i);
	return (dst);
}
