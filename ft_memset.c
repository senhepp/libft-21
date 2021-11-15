/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:33:33 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/10 14:10:36 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// write bytes = len of value = c to the string = b

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*newstr;

	newstr = (unsigned char *)b;
	while (len > 0)
	{
		*newstr = c;
		newstr++;
		len--;
	}
	return (b);
}
