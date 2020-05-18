/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 17:24:29 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/18 03:10:56 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_d(t_params *prms)
{
	char	*s;

	s = ft_itoa((int)va_arg(prms->ap, long int));
	ft_putstr(s);
	prms->len += ft_strlen(s);
}
