/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 00:29:12 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/18 00:54:00 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	//ft_printf("teste da stdarg.h |%-20.i| \n", 23425);
	//ft_putstr("abcdef\n");
	// printf("%d\n", ft_strlen("asdfg"));

	printf("|%s|\n", ft_itoa(1234567));
	return (0);
}
