/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 23:28:38 by coder             #+#    #+#             */
/*   Updated: 2022/09/10 22:38:19 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	c;
	size_t	k;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	c = 0;
	k = i;
	if (size <= i)
	{
		return (j + size);
	}
	else
	{
		while (i < size - 1 && src[c] != '\0')
		{
			dst[i] = ((char *)src)[c];
			i++;
			c++;
		}
		dst[i] = '\0';
	}
	return (k + j);
}
