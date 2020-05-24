/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 00:31:32 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/23 20:56:33 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_p(t_params *prms)
{
	char	*s;

	s = ft_itoa_base((size_t)va_arg(prms->ap, void *), 16, 'a');
	ft_putstr("0x");
	ft_putstr(s);
	prms->len += ft_strlen(s) + 2;
}
