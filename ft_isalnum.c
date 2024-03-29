/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:06:02 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/10 13:40:07 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((c >= '0') && (c <= '9'))
		|| (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))))
		return (1);
	return (0);
}
