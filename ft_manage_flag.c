/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 01:31:40 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/21 14:38:23 by jaqrodri         ###   ########.fr       */
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
	fmt->prec = -1;
}

long int	ft_read_star(t_params *prms)
{
	long int	num;

	num = (long int)va_arg(prms->ap, void *);
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

void		ft_manage_flag(t_params *prms)
{
	int			j;
	t_format	fmt;
	long int	num;

	j = ++(prms->i);
	ft_start_flag(&fmt);
	while (!ft_isspecifier(prms->s[j]) && prms->s[j] != '\0')
	{
		if (prms->s[j] == '-')
		{
			fmt.neg = 1;
			fmt.space = ' ';
		}
		else if (prms->s[j] == '0' && !fmt.neg)
			fmt.space = '0';
		else if (prms->s[j] == '.')
		{
			j++;
			if (prms->s[j] == '*')
			{
				num = ft_read_star(prms);
				if(num < 0)
					num = -num;
				fmt.prec = num;
			}
			else
			{
				fmt.prec = ft_read_num(prms, &j);
			}
		}
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
			else
			{
				fmt.width = ft_read_num(prms, &j);
			}
		}
		j++;
	}
	prms->i = j;
	ft_check_specifier(prms, &fmt);
}
