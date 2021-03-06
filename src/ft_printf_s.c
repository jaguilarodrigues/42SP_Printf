/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 03:06:23 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/26 23:09:19 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_s(t_params *prms, t_format *fmt)
{
	char	*s;
	int		slen;
	int		notspace;

	s = va_arg(prms->ap, char *);
	(s == NULL) ? s = "(null)" : 0;
	slen = ft_strlen(s);
	notspace = (fmt->prec < slen && fmt->prec > -1) ? fmt->prec : slen;
	if (!(fmt->neg))
		ft_putnchar(fmt->width - notspace, fmt->space);
	ft_putstr(s, notspace);
	if (fmt->neg)
		ft_putnchar(fmt->width - notspace, fmt->space);
	prms->len += (fmt->width > notspace) ? fmt->width : notspace;
}
