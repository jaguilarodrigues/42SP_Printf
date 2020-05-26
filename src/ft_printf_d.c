/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 17:24:29 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/26 19:43:33 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_d(t_params *prms, t_format *fmt)
{
	char	*s;
	int		slen;
	int		notspace;
	int		minus;

	s = ft_itoa(va_arg(prms->ap, int));
	minus = (s[0] == '-') ? 1 : 0;
	slen = (fmt->prec == 0 && *s == '0') ? 0 : ft_strlen(s);
	(minus && fmt->prec > 1) ? fmt->prec++ : 0;
	notspace = (fmt->prec > slen) ? fmt->prec : slen;
	(fmt->space == '0' && fmt->prec >= 0) ? fmt->space = ' ' : 0;
	if (fmt->neg)
		ft_put_dux(s, slen, fmt);
	if (fmt->space == '0' && minus && !(fmt->neg))
	{
		ft_putchar('-');
		s++;
	}
	else
		minus = 0;
	ft_putnchar(fmt->width - notspace, fmt->space);
	if (!(fmt->neg))
		ft_put_dux(s, slen, fmt);
	prms->len += (fmt->width > notspace) ? fmt->width : notspace;
}
