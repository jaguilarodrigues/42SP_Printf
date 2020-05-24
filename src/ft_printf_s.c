/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 03:06:23 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/23 20:56:53 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_s(t_params *prms)
{
	char	*s;

	s = va_arg(prms->ap, char *);
	ft_putstr(s);
	prms->len += ft_strlen(s);
}
