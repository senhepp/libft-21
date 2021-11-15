/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:44:02 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/11 17:36:03 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// location of c in string s (from first appearance) in n bytes

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = (const char *)s;
	i = 0;
	while ((str[i]) && (i < n))
	{
		if (c == str[i])
			return (str + i);
		else
			i++;
	}
	return (NULL);
}
