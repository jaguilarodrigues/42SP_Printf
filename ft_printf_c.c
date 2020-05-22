/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 02:42:23 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/21 18:40:18 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_c(t_params *prms, t_format *fmt)
{
	if (!(fmt->neg))
		ft_putnchar(fmt->width - 1, fmt->space);
	ft_putchar((char)va_arg(prms->ap, int));
	if (fmt->neg)
		ft_putnchar(fmt->width - 1, fmt->space);
	prms->len += fmt->width;
}
