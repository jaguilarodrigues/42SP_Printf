/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 01:31:40 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/25 03:07:26 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		ft_start_flag(t_format *fmt)
{
	fmt->i = 0;
	fmt->neg = 0;
	fmt->width = 0;
	fmt->space = ' ';
	fmt->prec = -1;
}

static void		ft_catch_width(int *j, t_params *prms, t_format *fmt)
{
	int	num;

	if (prms->s[*j] == '*')
	{
		num = ft_read_star(prms);
		if (num < 0)
		{
			fmt->neg = 1;
			fmt->space = ' ';
			num = -num;
		}
		fmt->width = num;
	}
	else if (prms->s[*j] >= '0' && prms->s[*j] <= '9')
		fmt->width = ft_read_num(prms, j);
}

int				ft_manage_flag(t_params *prms)
{
	int			j;
	int			prec;
	t_format	fmt;

	prec = 0;
	j = ++(prms->i);
	ft_start_flag(&fmt);
	while (!ft_isspecifier(prms->s[j]) && prms->s[j] != '\0')
	{
		if (prms->s[j] == '-')
			fmt.neg = 1;
		else if (prms->s[j] == '.')
			ft_catch_prec(&prec, &j, prms, &fmt);
		else if (prms->s[j] == '0' && !fmt.neg && prec == 0)
			fmt.space = '0';
		else
			ft_catch_width(&j, prms, &fmt);
		j++;
	}
	if (prms->s[j] == '\0')
		return (-1);
	prms->i = j;
	ft_check_specifier(prms, &fmt);
	return (1);
}
