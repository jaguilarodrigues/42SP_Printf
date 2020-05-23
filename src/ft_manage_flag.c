/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 01:31:40 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/23 19:51:16 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_isspecifier(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
	|| c == 'u' || c == 'x' || c == 'X');
}

void		ft_start_flag(t_format *fmt)
{
	fmt->i = 0;
	fmt->neg = 0;
	fmt->width = 0;
	fmt->space = ' ';
	fmt->prec = 0;
}

int	ft_read_star(t_params *prms)
{
	int	num;

	num = va_arg(prms->ap, int);
	return (num);
}

long int	ft_read_num(t_params *prms, int *j)
{
	long int	num;

	num = 0;
	while (prms->s[*j] >= '0' && prms->s[*j] <='9')
	{
		num = (num *10) + (prms->s[*j] - '0');
		(*j)++;
	}
	(*j)--;
	return (num);
}

int		ft_manage_flag(t_params *prms)
{
	int			j;
	int			prec;
	t_format	fmt;
	long int	num;

	prec = 0;
	j = ++(prms->i);
	ft_start_flag(&fmt);
	while (!ft_isspecifier(prms->s[j]) && prms->s[j] != '\0')
	{
		if (prms->s[j] == '-')
		{
			fmt.neg = 1;
			fmt.space = ' ';
		}
		else if (prms->s[j] == '.')
		{
			j++;
			prec = 1;
			if (prms->s[j] == '*')
			{
				num = ft_read_star(prms);
				fmt.prec = (num < 0) ? 0 : num;
			}
			else if (prms->s[j] >= '0' && prms->s[j] <='9')
				fmt.prec = ft_read_num(prms, &j);
			else
			{
				j--;
				fmt.prec = 0;
			}
		}
		else if (prms->s[j] == '0' && !fmt.neg && prec == 0)
			fmt.space = '0';
		else
		{
			if (prms->s[j] == '*')
			{
				num = ft_read_star(prms);
				if(num < 0)
				{
					fmt.neg = 1;
					fmt.space = ' ';
					num = -num;
				}
				fmt.width = num;
			}
			else if (prms->s[j] >= '0' && prms->s[j] <='9')
				fmt.width = ft_read_num(prms, &j);
		}
		j++;
	}
	if(prms->s[j] == '\0')
		return (-1);
	prms->i = j;
	ft_check_specifier(prms, &fmt);
	return (1);
}
