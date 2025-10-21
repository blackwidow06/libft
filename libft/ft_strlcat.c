/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:15:45 by malavaud          #+#    #+#             */
/*   Updated: 2025/10/17 11:35:47 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	lensrc;
	size_t	lendest;

	lensrc = ft_strlen(src);
	lendest = ft_strlen(dest);
	if (lendest >= destsize)
		lendest = destsize;
	if (lendest == destsize)
		return (destsize + lensrc);
	if (lensrc < destsize - lendest)
		ft_memmove(dest + lendest, src, lensrc + 1);
	else
	{
		ft_memmove(dest + lendest, src, destsize - lendest - 1);
		dest[destsize - 1] = '\0';
	}
	return (lendest + lensrc);
}
