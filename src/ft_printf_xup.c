/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 01:04:00 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/26 19:44:08 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_xup(t_params *prms, t_format *fmt)
{
	char	*s;
	int		slen;
	int		notspace;

	s = ft_itoa_base((size_t)va_arg(prms->ap, void *), 16, 'A');
	slen = (fmt->prec == 0 && *s == '0') ? 0 : ft_strlen(s);
	notspace = (fmt->prec > slen) ? fmt->prec : slen;
	(fmt->space == '0' && fmt->prec >= 0) ? fmt->space = ' ' : 0;
	if (fmt->neg)
		ft_put_dux(s, slen, fmt);
	ft_putnchar(fmt->width - notspace, fmt->space);
	if (!(fmt->neg))
		ft_put_dux(s, slen, fmt);
	prms->len += (fmt->width > notspace) ? fmt->width : notspace;
	ft_strdel(&s);
}
