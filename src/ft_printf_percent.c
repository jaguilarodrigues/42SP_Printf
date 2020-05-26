/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 15:25:00 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/26 15:35:53 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_percent(t_params *prms, t_format *fmt)
{
	if (!(fmt->neg))
		ft_putnchar(fmt->width - 1, fmt->space);
	ft_putchar('%');
	if (fmt->neg)
		ft_putnchar(fmt->width - 1, fmt->space);
	prms->len += (fmt->width > 0) ? fmt->width : 1;
}
