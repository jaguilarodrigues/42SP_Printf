/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 03:20:03 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/23 21:00:34 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_base(size_t n, int base, int alf)
{
	char		*conum;
	size_t		aux;
	int			i;

	i = 1;
	aux = n;
	while ((aux = aux / base) > 1)
		i++;
	if (!(conum = malloc((i + 1) * sizeof(char))))
		return (NULL);
	conum[i--] = '\0';
	while (i >= 0)
	{
		if ((n % base) < 10)
			conum[i] = (n % base) + '0';
		else
			conum[i] = (n % base) - 10 + alf;
		n = n / base;
		i--;
	}
	return (conum);
}
