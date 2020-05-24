/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 00:45:13 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/23 22:01:20 by jaqrodri         ###   ########.fr       */
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
	int				i;
	int				len;
}					t_params;

typedef struct		s_format
{
	int				i;
	int				neg;
	int				width;
	char			space;
	int				prec;
}					t_format;

int		ft_printf(const char *s, ...);
void	ft_printf_c(t_params *prms, t_format *fmt);
void	ft_printf_d(t_params *prms, t_format *fmt);
void	ft_printf_s(t_params *prms);
void	ft_printf_p(t_params *prms);
void	ft_printf_u(t_params *prms, t_format *fmt);
void	ft_printf_x(t_params *prms, t_format *fmt);
void	ft_printf_xup(t_params *prms, t_format *fmt);
int		ft_manage_flag(t_params *prms);
void	ft_check_specifier(t_params *prms, t_format *fmt);
int		ft_strlen(char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_itoa_base(size_t n, int base, int alf);
char	*ft_itoa(int n);
void	ft_putnbr(int n);
void	ft_putstr(char *s);
void	ft_putchar(char c);
void	ft_putnchar(int n, int c);
int		ft_isspecifier(char c);
void	ft_catch_precision(int *prec, int *j, t_params *prms, t_format *fmt);
int		ft_read_star(t_params *prms);
int		ft_read_num(t_params *prms, int *j);

#endif
