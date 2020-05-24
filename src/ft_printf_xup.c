/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 01:04:00 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/23 20:58:37 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_xup(t_params *prms, t_format *fmt)
{
	char	*s;
	int		slen;

	s = ft_itoa_base((size_t)va_arg(prms->ap, void *), 16, 'A');
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
