/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 03:20:03 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/27 04:17:22 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_make_eight(char *str, char c)
{
	int i;

	i = 0;
	if (ft_strlen(str) > 8 && c != 'p' && c != 'u')
		i = ft_strlen(str) - 8;
	while (str[i] == '0' && i < ft_strlen(str) - 1)
		i++;
	return (&str[i]);
}

char		*ft_itoa_base(size_t n, int base, int alf, char c)
{
	char		*conum;
	size_t		aux;
	int			i;

	i = 1;
	aux = n;
	while ((aux = aux / base) > 0)
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
	return (ft_make_eight(conum, c));
}
