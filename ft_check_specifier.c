/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_specifier.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 03:43:44 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/15 04:29:02 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check_specifier(t_params *prms)
{
	if (prms->s[prms->i] == 'd' || prms->s[prms->i] == 'i')
		 //ft_printf_d();
	if (prms->s[prms->i] == 'c')
		 //ft_printf_c();
	if (prms->s[prms->i] == 's')
		 //ft_printf_s();
	if (prms->s[prms->i] == 'p')
		 //ft_printf_p();
	if (prms->s[prms->i] == 'u')
		 //ft_printf_u();
	if (prms->s[prms->i] == 'x')
		 //ft_printf_x();
	if (prms->s[prms->i] == 'X')
		 //ft_printf_X();
}