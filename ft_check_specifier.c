/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 03:43:44 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/18 03:07:11 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_specifier(t_params *prms)
{
	if (prms->s[prms->i] == 'd' || prms->s[prms->i] == 'i')
		ft_printf_d(prms);
	if (prms->s[prms->i] == 'c')
		ft_printf_c(prms);
	if (prms->s[prms->i] == 's')
		ft_printf_s(prms);
// 	if (prms->s[prms->i] == 'p')
// 		//ft_printf_p(prms);
// 	if (prms->s[prms->i] == 'u')
// 		//ft_printf_u(prms);
// 	if (prms->s[prms->i] == 'x')
// 		//ft_printf_x(prms);
// 	if (prms->s[prms->i] == 'X')
// 		//ft_printf_X(prms);
	prms->i++;
}
