/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 01:09:11 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/23 21:00:15 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_u(t_params *prms, t_format *fmt)
{
	char	*s;
	int		slen;

	s = ft_itoa_base(va_arg(prms->ap, unsigned int), 10, 'a');
	slen = ft_strlen(s);
	if (fmt->prec > slen)
		fmt->prec = fmt->prec - slen;
	else
		fmt->prec = 0;
	if (!(fmt->neg))
		ft_putnchar(fmt->width - (fmt->prec + slen), fmt->space);
	ft_putnchar(fmt->prec, '0');
	ft_putstr(s);
	if (fmt->neg)
		ft_putnchar(fmt->width - (fmt->prec + slen), fmt->space);
	if (fmt->width > slen)
		prms->len += fmt->width;
	else
		prms->len += (slen + fmt->prec);
}
