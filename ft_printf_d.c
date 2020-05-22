/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 17:24:29 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/21 19:13:40 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_d(t_params *prms, t_format *fmt)
{
	char	*s;
	int		slen;

	s = ft_itoa((int)va_arg(prms->ap, long int));
	slen = ft_strlen(s);

	if(fmt->prec > slen)
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
