/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malavaud <malavaud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:19:08 by malavaud          #+#    #+#             */
/*   Updated: 2025/10/17 12:00:57 by malavaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;
	size_t			i;

	if (src == NULL && dest == NULL)
		return (NULL);
	tmpdest = (unsigned char *)dest;
	tmpsrc = (unsigned char *)src;
	if (tmpdest > tmpsrc)
	{
		while (len-- > 0)
			tmpdest[len] = tmpsrc[len];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			tmpdest[i] = tmpsrc[i];
			i++;
		}
	}
	return (dest);
}
