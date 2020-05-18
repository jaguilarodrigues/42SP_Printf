/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 23:53:28 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/18 03:45:28 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_count_number(int n)
{
	int		i;
	size_t	aux;

	i = 0;
	if (n < 0)
	{
		i++;
		aux = -n;
	}
	else
		aux = n;
	while((aux = aux/10) > 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	size_t	nn;
	char	*strn;

	i = ft_count_number(n);
	if (!(strn = malloc((i + 1) * sizeof(char))))
		return NULL;
	if (n < 0)
	{
		strn[0] = '-';
		nn = -n;
	}
	else
		nn = n;
	strn[i + 1] = '\0';
	while (i >= 0 && nn > 0)
	{
		strn[i] = (nn % 10) + '0';
		nn = nn / 10;
		i--;
	}
	return (strn);
}
