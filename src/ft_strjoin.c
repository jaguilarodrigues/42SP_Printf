/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 01:44:59 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/05/18 02:14:39 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*ns;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	if (!(ns = malloc((s1_len + s2_len + 1) * sizeof(char))))
		return (NULL);
	while (i < s1_len)
	{
		ns[i] = s1[i];
		i++;
	}
	while (j < s2_len)
	{
		ns[i + j] = s2[j];
		j++;
	}
	ns[i + j] = '\0';
	return (ns);
}
