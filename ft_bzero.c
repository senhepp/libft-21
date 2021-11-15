/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:19:23 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/10 15:36:52 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// write zeroes to a byte string

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*newstr;

	newstr = (char *)s;
	while (n > 0)
	{
		*newstr = '\0';
		newstr++;
		n--;
	}
}
