/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 01:31:40 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/20 02:19:59 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_isspecifier(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
	|| c == 'u' || c == 'x' || c == 'X');
}

void	ft_replace_star(t_params *prms)
{
	long int	num;
	num = (long int)va_arg(prms->ap, void *);
	num = num * 1;//apagar
	// printf("/%ld/", num);
}

void	ft_start_flag(t_format *fmt)
{
	fmt->i = 0;
	fmt->neg = 0;
	fmt->width = 0;
	fmt->prec = 0;
}

int	ft_catch_flag(t_params *prms)
{
	int			j;
	int			i;
	t_format	fmt;

	i = 0;
	j = ++(prms->i);
	ft_start_flag(&fmt);
	while (!ft_isspecifier(prms->s[j++]));
	j--;
	if (!(fmt.flag = malloc((j - prms->i) + 1 * sizeof(char))))
		return (-1);
	while (i < (j - prms->i))
	{
		if (prms->s[prms->i + i] != '*')
			fmt.flag[i] = prms->s[prms->i + i];
		else
		{
			ft_replace_star(prms);
		}

		i++;
	}
	fmt.flag[i] = '\0';
	prms->i += i;
	return (0);
}

void	ft_manage_flag(t_params *prms)
{
	ft_catch_flag(prms);
	ft_check_specifier(prms);
}
