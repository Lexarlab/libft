/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albezerr <albezerr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:24:28 by albezerr          #+#    #+#             */
/*   Updated: 2024/11/15 11:24:28 by albezerr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		len;
	char	*str;
	int		i;

	len = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
