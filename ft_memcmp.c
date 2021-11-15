/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:46:18 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/11 18:55:43 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares the first n bytes (each interpreted as unsigned char)
// of the memory areas s1 and s2
// returns int (< 0, 0, > 0)
// n == 0 -> the return (0).

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while ((ss1[i]) || (ss2[i]) && (n > 0))
	{
		if (ss1[i] > ss2[i])
		{
			return (1);
		}
		else if (ss1[i] < ss2[i])
		{
			return (-1);
		}
		else
		{
			i++;
			n--;
		}
	}
	return (0);
}
