/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:24:51 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/13 15:43:47 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ("1011314101501", "01") -> 3141015

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(s1);
	str = (char *)s1;
	if (s1 == '\0')
		return (NULL);
	while ((s1 *) && (ft_strchr(set, s1 *)))
		s1++;
	while (s1[i] && ft_strchr(set, s1[slen - i]))
		i--;
	str = ft_substr(s1, 1, slen);
	return (str);
}
