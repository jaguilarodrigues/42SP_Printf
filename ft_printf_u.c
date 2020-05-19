/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 01:09:11 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/19 01:09:54 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_u(t_params *prms)
{
	char	*s;

	s = ft_itoa_base((size_t)va_arg(prms->ap, void *), 10, 'a');
	ft_putstr(s);
	prms->len += ft_strlen(s);
}

