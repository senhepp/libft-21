/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:02:57 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/11 18:04:07 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// saves copy of a string

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;
	size_t	i;

	i = 0;
	newstr = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (s[i])
	{
		newstr[i] = s[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
