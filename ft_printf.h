/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 00:45:13 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/17 18:38:56 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <limits.h>
# include <stdarg.h>

# include <stdio.h>

typedef struct		s_params
{
	const char		*s;
	va_list			ap;
	char			*flag;
	int				i;
	int				len;
}					t_params;

void	ft_putnbr(int n);
void	ft_putstr(char *s);
void	ft_putchar(char c);
void	ft_manage_flag(t_params *prms);
void	ft_check_specifier(t_params *prms);
int		ft_printf(const char *s, ...);
void	ft_printf_c(t_params *prms);
void	ft_printf_d(t_params *prms);

#endif
