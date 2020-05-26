/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:31:32 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/26 20:36:52 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_p(t_params *prms, t_format *fmt)
{
	char	*s;
	int		slen;

	s = ft_itoa_base((size_t)va_arg(prms->ap, void *), 16, 'a');
	slen = ft_strlen(s);
	if (!(fmt->neg))
		ft_putnchar(fmt->width - (slen + 2), fmt->space);
	ft_putstr("0x", 2);
	ft_putstr(s, slen);
	if (fmt->neg)
		ft_putnchar(fmt->width - (slen + 2), fmt->space);
	prms->len += (fmt->width > (slen + 2)) ? fmt->width : slen + 2;
	ft_strdel(&s);
}
