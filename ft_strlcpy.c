/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:02:03 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/13 13:43:43 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// write src to dst (not overwrited), dstsize - target size

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while ((src[i]) && (dstsize > 0))
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	return (i);
}
