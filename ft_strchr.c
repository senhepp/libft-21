/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:44:02 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/10 19:51:14 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// location of c in string s (from first appearance)

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	cn;
	int		i;

	str = (char *)s;
	cn = (char)c;
	i = 0;
	while (str[i])
	{
		if (cn == str[i])
			return (str + i);
		else
			i++;
	}
	*str = '\0';
	return (str);
}
