/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u_long.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apoisson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 11:07:19 by apoisson          #+#    #+#             */
/*   Updated: 2016/12/15 11:19:21 by apoisson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_u_long(unsigned long n)
{
	if (n < 10)
		ft_putchar('0' + n);
	else
	{
		ft_putnbr_u_long(n / 10);
		ft_putchar('0' + n % 10);
	}
}
