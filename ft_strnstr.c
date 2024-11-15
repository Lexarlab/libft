/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albezerr <albezerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:24:59 by albezerr          #+#    #+#             */
/*   Updated: 2024/11/15 11:24:59 by albezerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	int		j;

	i = 0;
	if (*to_find == '\0')
		return ((char *)str);
	while (*str != '\0' && i < n)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (to_find[i] && str[i + j] && i + j < n
				&& str[i + j] == to_find[j])
			{
				j++;
			}
			if (to_find[j] == '\0')
				return ((char *)str + i);
		}
		i++;
	}
	return (0);
}
