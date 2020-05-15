/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 00:32:39 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/15 01:28:19 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *s, ...)
{
	int		i;
	int		len;
	va_list	ap;

	va_start(ap, s);
	while (s[i])
	{
		if (s[i] != '%')
		{
			ft_putchar(s[i++]);
			len++;
		}
		// else
		// {
		// 	ft_manage_flag();
		// }
	}
	printf("%s", (char *)va_arg(ap, void *));
	va_end(ap);

	return (len);
}
