/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 00:29:12 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/21 21:45:10 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	//ft_printf("teste da stdarg.h |%-20.i| \n", 23425);
	//ft_putstr("abcdef\n");
	// printf("|%d\n", ft_strlen("asdfg"));

	//printf("|%s|\n", ft_itoa(1234567));

	//printf("|%s|\n", ft_strjoin("teste","se junta"));
	// printf("|%d|\n", ft_strjoin("teste","se junta")[13]);

	// ft_printf("teste da stdarg.h |%-20.d| \n", -34235);
	// printf("|%X\n", -7376);

	// // int n;
	// // int *p;

	// // p = &n;
	// printf("%d|\n", printf("|%p|", p));
	// // printf("%d|\n", ft_printf("|%p|", p));

	// printf("%d|\n", printf("|%x|", -56324234));
	// // printf("%d|\n", ft_printf("|%x|", -56324234));

	// printf("%d|\n", printf("|%X|", -56324234));
	// // printf("%d|\n", ft_printf("|%X|", -56324234));

	// printf("%d|\n", printf("|%u|", -4234));
	// // printf("%d|\n", ft_printf("|%u|", -4234));

	// printf("%d|\n", printf("|%-20c|", 'A'));
	// // printf("%d|\n", ft_printf("|%-20c|", 'A'));

	// printf("%d|\n", printf("|%-20c|", 'A'));
	// printf("%d|\n", ft_printf("|%-20c|", 'A'));

	int n = 23867;
	// printf("[width]diuxX\n");
	// //width < len .: width = len
	// //width > len .: width = width - len
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("|%010d|", n));
	// printf("%d|\n", printf("|%010d|", n));
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("|%3d|", n));
	// printf("%d|\n", printf("|%3d|", n));
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", printf("|%d|", n));
	// printf("%d|\n", ft_printf("|%d|", n));
	// // printf("---------------------------------------------------------\n");
	// // printf("[.]d\n");
	// // // // precision > len .: precision = precision - len (0 a direita)
	// // // // precision < len .: len
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("+|%.10d|", n));
	// printf("%d|\n", ft_printf("-|%.10d|", n));
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("+|%.3d|", n));
	// printf("%d|\n", printf("-|%.3d|", n));
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("+|%.0d|", n));
	// printf("%d|\n", printf("-|%.0d|", n));
	// // printf("---------------------------------------------------------\n");

	// // printf("[-.]diuxX\n");
	// // // // // precision > len .: precision = precision - len (0 a direita)
	// // // // // precision < len .: len
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("+|%-.10d|", n));
	// printf("%d|\n", printf("-|%-.10d|", n));
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("+|%-.3d|", n));
	// printf("%d|\n", printf("-|%-.3d|", n));
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("+|%-.0d|", n));
	// printf("%d|\n", printf("-|%-.0d|", n));
	// // printf("---------------------------------------------------------\n");

	// // printf("[width][.]diuxX\n");
	// // // // já ter feito o calculo do precision
	// // // // // precision >< len .: espaços = width-precision
	// // // // // alinha o texto à direita
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("+|%20.10d|", n));
	// printf("%d|\n", printf("-|%20.10d|", n));
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("+|%20.3d|", n));
	// printf("%d|\n", printf("-|%20.3d|", n));
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("+|%20.0d|", n));
	// printf("%d|\n", printf("-|%20.0d|", n));
	// // printf("---------------------------------------------------------\n");
	// // printf("[-][width][.]diuxX\n");
	// // // // // precision >< len .: espaços = width-precision
	// // // // // alinha o texto à esquerda
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("+|%-20.10d|", n));
	// printf("%d|\n", printf("-|%-20.10d|", n));
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("+|%-20.3d|", n));
	// printf("%d|\n", printf("-|%-20.3d|", n));
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("+|%-20.0d|", n));
	// printf("%d|\n", printf("-|%-20.0d|", n));
	// printf("---------------------------------------------------------\n");
	// printf("%d|\n", ft_printf("+|%.0d|", n));
	// printf("%d|\n", printf("-|%-.0d|", n));
	// printf("---------------------------------------------------------\n");







	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("|%010x|", n));
	printf("%d|\n", printf("|%010x|", n));
	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("|%3x|", n));
	printf("%d|\n", printf("|%3x|", n));
	printf("---------------------------------------------------------\n");
	printf("%d|\n", printf("|%x|", n));
	printf("%d|\n", ft_printf("|%x|", n));
	// printf("---------------------------------------------------------\n");
	// printf("[.]d\n");
	// // // precision > len .: precision = precision - len (0 a direita)
	// // // precision < len .: len
	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("+|%.10x|", n));
	printf("%d|\n", ft_printf("-|%.10x|", n));
	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("+|%.3x|", n));
	printf("%d|\n", printf("-|%.3x|", n));
	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("+|%.0x|", n));
	printf("%d|\n", printf("-|%.0x|", n));
	// printf("---------------------------------------------------------\n");

	// printf("[-.]diuxX\n");
	// // // // precision > len .: precision = precision - len (0 a direita)
	// // // // precision < len .: len
	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("+|%-.10x|", n));
	printf("%d|\n", printf("-|%-.10x|", n));
	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("+|%-.3x|", n));
	printf("%d|\n", printf("-|%-.3x|", n));
	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("+|%-.0x|", n));
	printf("%d|\n", printf("-|%-.0x|", n));
	// printf("---------------------------------------------------------\n");

	// printf("[width][.]diuxX\n");
	// // // já ter feito o calculo do precision
	// // // // precision >< len .: espaços = width-precision
	// // // // alinha o texto à direita
	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("+|%20.10x|", n));
	printf("%d|\n", printf("-|%20.10x|", n));
	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("+|%20.3x|", n));
	printf("%d|\n", printf("-|%20.3x|", n));
	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("+|%20.0x|", n));
	printf("%d|\n", printf("-|%20.0x|", n));
	// printf("---------------------------------------------------------\n");
	// printf("[-][width][.]diuxX\n");
	// // // // precision >< len .: espaços = width-precision
	// // // // alinha o texto à esquerda
	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("+|%-20.10x|", n));
	printf("%d|\n", printf("-|%-20.10x|", n));
	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("+|%-20.3x|", n));
	printf("%d|\n", printf("-|%-20.3x|", n));
	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("+|%-20.0x|", n));
	printf("%d|\n", printf("-|%-20.0x|", n));
	printf("---------------------------------------------------------\n");
	printf("%d|\n", ft_printf("+|%.0x|", n));
	printf("%d|\n", printf("-|%-.0x|", n));
	printf("---------------------------------------------------------\n");


	return (0);
}
