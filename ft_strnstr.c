/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:55:24 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/13 13:42:29 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return pointer to the first occurence of s2 in s1
// s2 is empty -> return (s1)
// s2 is nowhere in s1 -> return (NULL)

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*full;
	char	*small;
	size_t	length;

	full = (char *)haystack;
	small = (char *)needle;
	length = ft_strlen(small);
	if (length == 0)
		return (haystack);
	while ((full *) && (len - length + 1 > 0))
	{
		if (ft_memcmp(full, small, length) == 0)
			return (*full);
		full++;
		len--;
	}
	if (ft_memcmp(full, small, length) < 0)
		return (NULL);
}
