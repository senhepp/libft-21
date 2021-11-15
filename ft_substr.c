/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:53:03 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/13 15:38:36 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocates and returns a substring from the string ’s’.
// the substring begins at index ’start’ and is of maximum size ’len’.
// ("abcdefg", 2, 3) -> cde

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*newstr;
	char	*str;
	size_t	index;

	index = 0;
	str = (char *)s;
	newstr = (char *)malloc((len + 1) * sizeof(char));
	if (*newstr == '\0')
		return (NULL);
	while (newstr[index])
	{
		if ((index >= start) && (len > 0))
		{
			newstr[index] = str[start];
		}
		start++;
		index++;
		len--;
	}
	newstr[index] = '\0';
	return (newstr);
}
