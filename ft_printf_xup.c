/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 01:04:00 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/19 01:05:07 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_xup(t_params *prms)
{
	char	*s;

	s = ft_itoa_base((size_t)va_arg(prms->ap, void *), 16, 'A');
	ft_putstr(s);
	prms->len += ft_strlen(s);
}
