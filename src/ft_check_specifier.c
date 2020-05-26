/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 03:43:44 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/25 16:27:52 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_specifier(t_params *prms, t_format *fmt)
{
	if (prms->s[prms->i] == 'd' || prms->s[prms->i] == 'i')
		ft_printf_d(prms, fmt);
	if (prms->s[prms->i] == 'c')
		ft_printf_c(prms, fmt);
	if (prms->s[prms->i] == 's')
		ft_printf_s(prms, fmt);
	if (prms->s[prms->i] == 'p')
		ft_printf_p(prms, fmt);
	if (prms->s[prms->i] == 'u')
		ft_printf_u(prms, fmt);
	if (prms->s[prms->i] == 'x')
		ft_printf_x(prms, fmt);
	if (prms->s[prms->i] == 'X')
		ft_printf_xup(prms, fmt);
	if (prms->s[prms->i] == '%')
		ft_printf_percent(prms, fmt);
	prms->i++;
}
