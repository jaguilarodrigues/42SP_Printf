/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 17:24:29 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/23 17:31:12 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_d(t_params *prms, t_format *fmt)
{
	char	*s;
	int		slen;
	int		notspace;
	// int		prec;
	int		minus;

	s = ft_itoa((int)va_arg(prms->ap, long int));
	minus = (s[0] == '-') ? 1 : 0;
	slen = (fmt->prec == 0 && *s == 0) ? 0 : ft_strlen(s);
	(minus && fmt->prec > 1) ? fmt->prec++ : 0;
	notspace = (fmt->prec > slen) ? fmt->prec : slen; //calcula valor que sera impresso
	(fmt->space == '0' && fmt->prec > 0) ? fmt->space = ' ' : 0;	//se tiver precissão não funciona a flag 0


	// se flag menos
	if (fmt->neg)
	{
		if (s[0] == '-')
		{
			ft_putchar((*s));
			s++;
		}
		ft_putnchar(fmt->prec - slen, '0');
		if (!(fmt->prec == 0 && *s == 0))
			ft_putstr(s);
	}
	if (fmt->space == '0' && minus)
	{
		ft_putchar('-');
		s++;
	}
	else
		minus = 0;
	ft_putnchar(fmt->width - notspace, fmt->space);

	if (!(fmt->neg))
	{
		if (s[0] == '-')
		{
			ft_putchar((*s));
			s++;
		}
		ft_putnchar(fmt->prec - slen, '0');
		if (!(fmt->prec == 0 && *s == 0))
			ft_putstr(s);
	}
	prms->len += (fmt->width > notspace) ? fmt->width : notspace;
}
