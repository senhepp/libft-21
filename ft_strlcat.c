/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:12:47 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/13 13:43:15 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// (12345, abcd, 7) -> 12345ab
// dstsize - target size

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	i = 0;
	dstlen = ft_strlen(dst);
	while ((src[i]) && (dstsize - dstlen > 0))
	{
		dst[i] += src[i];
		i++;
		dstsize--;
	}
	dst[i] = '\0';
	return (dstlen);
}
