/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 01:31:40 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/15 04:36:22 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_isspecifier(char c)
{
	return ((c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
	|| c == 'u' || c == 'x' || c == 'X') ? 1 : 0);
}

void	ft_manage_flag(t_params *prms)
{
	int	j;

	j = prms->i;
	while (!ft_isspecifier(prms->s[j++]));/*percorre a formatação*/
	prms->i = j;/*atuaiza posição na string*/
	ft_check_specifier(prms);
}
