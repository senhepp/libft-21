/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:33:33 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/10 15:36:26 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copy n bytes from source to destination (without overlap)

#include "libft.h"

void	*ft_memcpy(void *dst, const void *restrict src, size_t n)
{
	const char	*newsrc;
	char		*newdst;

	newsrc = (const char *)src;
	newdst = (char *)dst;
	while (n > 0)
	{
		*newdst = *newsrc;
		src++;
		dst++;
		n--;
	}
	return (dst);
}
