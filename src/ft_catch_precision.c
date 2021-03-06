/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_catch_precision.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 21:50:29 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/25 03:07:18 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_catch_prec(int *prec, int *j, t_params *prms, t_format *fmt)
{
	int	num;

	*j += 1;
	*prec = 1;
	if (prms->s[*j] == '*')
	{
		num = ft_read_star(prms);
		fmt->prec = num;
	}
	else if (prms->s[*j] >= '0' && prms->s[*j] <= '9')
		fmt->prec = ft_read_num(prms, j);
	else
	{
		*j -= 1;
		fmt->prec = 0;
	}
}
