/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 23:53:28 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/25 03:00:04 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		ft_count_number(int n)
{
	int			i;
	long int	aux;

	aux = n;
	i = 1;
	if (aux == 0)
		return (1);
	if (aux < 0)
	{
		i++;
		aux = -aux;
	}
	while ((aux = aux / 10) > 0)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	int			i;
	long int	nn;
	char		*strn;

	i = ft_count_number(n);
	if (!(strn = malloc((i + 1) * sizeof(char))))
		return (NULL);
	nn = n;
	if (nn < 0)
	{
		strn[0] = '-';
		nn = -nn;
	}
	strn[i--] = '\0';
	if (nn == 0)
		strn[0] = '0';
	else
		while (i >= 0 && nn > 0)
		{
			strn[i] = (nn % 10) + '0';
			nn = nn / 10;
			i--;
		}
	return (strn);
}
