/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:28:02 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/10 19:52:03 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// location of c in string s (from first appearance)

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	cn;
	int		i;
	int		len;

	len = ft_strlen(s);
	str = (char *)s;
	cn = (char)c;
	i = 0;
	while (str[len - 1 - i])
	{
		if (cn == str[len - 1 - i])
			return (str + len - 1 - i);
		else
			i++;
	}
	*str = '\0';
	return (NULL);
}
