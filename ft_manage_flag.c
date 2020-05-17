/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 01:31:40 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/17 13:28:08 by jaqrodri         ###   ########.fr       */
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

int	ft_catch_flag(t_params *prms)
{
	int	j;
	int	i;

	i = 0;
	j = ++(prms->i);
	while (!ft_isspecifier(prms->s[j++]));
	j--;
	if (!(prms->flag = malloc((j - prms->i) + 1 * sizeof(char))))
		return (-1);
	while (i < (j - prms->i))
	{
		if (prms->s[prms->i + i] != '*')
			prms->flag[i] = prms->s[prms->i + i];
		else
		{
			ft_replace_star(prms);
		}

		i++;
	}
	prms->flag[i] = '\0';
	prms->i += i;
	return 0;
}

void	ft_manage_flag(t_params *prms)
{
	ft_catch_flag(prms);
	ft_check_specifier(prms);
}
