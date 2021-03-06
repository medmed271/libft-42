/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:55:14 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/29 06:37:36 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	int		i;
	char	*b;

	i = 0;
	b = s;
	while (n)
	{
		b[i] = 0;
		i++;
		n--;
	}
	return (b);
}
