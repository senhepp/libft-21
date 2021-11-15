/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:09:17 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/10 16:39:23 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copy n bytes from source to destination (w/ overlap)

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*newsrc;
	char		*newdst;
	size_t		i;

	i = 0;
	newsrc = (const char *)src;
	newdst = (char *)dst;
	while (len > i)
	{
		if (newsrc <= newdst)
		{
			newdst[len - 1 - i] = newsrc[len - 1 - i];
			i++;
		}
		else
		{
			newdst[i] = newsrc[i];
			i++;
		}
	}
	return (dst);
}
