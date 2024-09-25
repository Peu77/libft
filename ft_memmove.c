/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eebert <eebert@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:04:04 by eebert            #+#    #+#             */
/*   Updated: 2024/09/25 15:04:05 by eebert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*lastd;
	const char	*lasts = src + len - 1;

	if (dst < src)
		return (ft_memcpy(dst, src, len));
	lastd = dst + len - 1;
	while (len--)
	{
		*lastd-- = *lasts--;
	}
	return (dst);
}
