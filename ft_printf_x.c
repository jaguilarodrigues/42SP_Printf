/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:50:25 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/19 00:54:09 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_x(t_params *prms)
{
	char	*s;

	s = ft_itoa_base((size_t)va_arg(prms->ap, void *), 16, 'a');
	ft_putstr(s);
	prms->len += ft_strlen(s);
}
