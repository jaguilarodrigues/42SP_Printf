/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 01:09:11 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/26 19:43:54 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_u(t_params *prms, t_format *fmt)
{
	char	*s;
	int		slen;
	int		notspace;

	s = ft_itoa_base(va_arg(prms->ap, unsigned int), 10, 'a');
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
