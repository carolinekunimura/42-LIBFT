/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:12:20 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 23:13:03 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	else
	{
		while (i < (size - 1) && i < (ft_strlen(src)))
		{
			dst[i] = ((char *)src)[i];
			i++;
		}
	dst[i] = '\0';
	}
	return (ft_strlen(src));
}
