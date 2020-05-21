/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 00:29:12 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/21 14:27:08 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	//ft_printf("teste da stdarg.h |%-20.i| \n", 23425);
	//ft_putstr("abcdef\n");
	// printf("%d\n", ft_strlen("asdfg"));

	//printf("|%s|\n", ft_itoa(1234567));

	//printf("|%s|\n", ft_strjoin("teste","se junta"));
	// printf("|%d|\n", ft_strjoin("teste","se junta")[13]);

	// ft_printf("teste da stdarg.h |%-20.d| \n", -34235);
	// printf("%X\n", -7376);

	// int n;
	// int *p;

	// p = &n;
	// printf("%d|\n", printf("|%p|", p));
	// printf("%d|\n", ft_printf("|%p|", p));

	// printf("%d|\n", printf("|%x|", -56324234));
	// printf("%d|\n", ft_printf("|%x|", -56324234));

	// printf("%d|\n", printf("|%X|", -56324234));
	// printf("%d|\n", ft_printf("|%X|", -56324234));

	// printf("%d|\n", printf("|%u|", -4234));
	// printf("%d|\n", ft_printf("|%u|", -4234));

	printf("%d|\n", printf("|%-20c|", 'A'));
	printf("%d|\n", ft_printf("|%-20c|", 'A'));

	return (0);
}
