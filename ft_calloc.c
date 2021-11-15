/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:01:03 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/13 13:32:39 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocate space for an array of count elements of size bytes.
// fill memory w/ 0 bits (ft_bzero)
// return pointer to the allocated space (ndef type)
// can't allocate memory -> return (NULL)

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = (void *)malloc(count * size);
	if (memory == NULL)
		return (memory);
	ft_bzero(memory, count * size);
	return (memory);
}
