/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_dux.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 19:42:54 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/26 19:43:06 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_dux(char *s, int slen, t_format *fmt)
{
	if (s[0] == '-')
	{
		ft_putchar((*s));
		s++;
	}
	ft_putnchar(fmt->prec - slen, '0');
	if (!(fmt->prec == 0 && *s == '0'))
		ft_putstr(s, slen);
}
