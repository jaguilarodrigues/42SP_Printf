/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 00:45:13 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/15 00:55:21 by jaqrodri         ###   ########.fr       */
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

// typedef struct		s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

int		ft_printf(const char *s, ...);
void	ft_putchar(char c);

#endif
