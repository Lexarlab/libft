/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albezerr <albezerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:23:04 by albezerr          #+#    #+#             */
/*   Updated: 2024/11/15 11:23:04 by albezerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = (unsigned char *)s;
	c = (unsigned char)c;
	i = 0;
	while (n > i)
	{
		if (*(p + i) == c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
