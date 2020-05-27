/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:31:32 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/26 23:55:59 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_p(t_params *prms, t_format *fmt)
{
	char	*s;
	int		slen;
	int		notspace;


	s = ft_itoa_base((size_t)va_arg(prms->ap, void *), 16, 'a', 'p');
	slen = (fmt->prec == 0 && *s == '0') ? 0 : ft_strlen(s);
	notspace = (fmt->prec > slen) ? fmt->prec + 2 : slen + 2;
	(fmt->space == '0' && fmt->prec >= 0) ? fmt->space = ' ' : 0;
	if (fmt->neg)
	{
		ft_putstr("0x", 2);
		ft_put_dux(s, slen, fmt);
	}
	ft_putnchar(fmt->width - notspace, fmt->space);
	if (!(fmt->neg))
	{
		ft_putstr("0x", 2);
		ft_put_dux(s, slen, fmt);
	}
	prms->len += (fmt->width > notspace) ? fmt->width : notspace;
	// ft_strdel(&s);
}
