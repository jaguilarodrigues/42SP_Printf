/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 13:29:33 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/17 17:17:09 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n)
{
	unsigned int	un;

	un = n;
	if (n < 0)
	{
		ft_putchar('-');
		un = -un;
	}
	if (un > 9)
	{
		ft_putnbr(un/10);
		ft_putnbr(un%10);
	}
	else
		ft_putchar((un % 10) + '0');
}
