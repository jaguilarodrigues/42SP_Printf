/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 00:32:39 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/27 04:17:51 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_start_params(t_params *prms, const char *s)
{
	prms->s = s;
	prms->i = 0;
	prms->len = 0;
}

int			ft_printf(const char *s, ...)
{
	t_params	prms;

	ft_start_params(&prms, s);
	va_start(prms.ap, s);
	while (prms.s[prms.i])
	{
		if (prms.s[prms.i] != '%')
		{
			ft_putchar(prms.s[prms.i++]);
			prms.len++;
		}
		else
		{
			if (ft_manage_flag(&prms) < 0)
				break ;
		}
	}
	va_end(prms.ap);
	return (prms.len);
}
