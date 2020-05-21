/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 02:42:23 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/21 17:45:20 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_c(t_params *prms, t_format *fmt)
{
	if (!(fmt->neg))
		ft_putnchar(fmt->width - prms->len, fmt->space);
	ft_putchar((char)va_arg(prms->ap, int));
	if (fmt->neg)
		ft_putnchar(fmt->width - prms->len, fmt->space);
	prms->len += fmt->width;
}
