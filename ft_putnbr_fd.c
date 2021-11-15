/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfurnitu <tfurnitu@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:57:31 by tfurnitu          #+#    #+#             */
/*   Updated: 2021/11/13 15:50:26 by tfurnitu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648");
		}
		else
		{
			ft_putchar_fd("-", fd);
			n = -n;
			ft_putnbr_fd(n, fd);
		}
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10, fd);
	}
	ft_putnbr((n % 10 + '0'), fd);
}
