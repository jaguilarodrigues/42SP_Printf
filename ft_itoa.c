/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 23:53:28 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/18 00:52:31 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa(int n)
{
	int		i;
	int		aux;
	char	*strn;

	i = 0;
	aux = n;
	while((aux = aux/10) > 0)
		i++;
	if (!(strn = malloc((i + 1) * sizeof(char))))
		return NULL;
	strn[i + 1] = '\0';
	while (i >= 0)
	{
		strn[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (strn);
}
