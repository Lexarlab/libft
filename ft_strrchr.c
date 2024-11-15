/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albezerr <albezerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:25:02 by albezerr          #+#    #+#             */
/*   Updated: 2024/11/15 11:25:02 by albezerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		ch;
	const char	*p;

	ch = (char)c;
	p = NULL;
	while (*s)
	{
		if (*s == ch)
			p = s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return ((char *)p);
}
