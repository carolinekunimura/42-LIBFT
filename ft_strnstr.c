/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:20:56 by coder             #+#    #+#             */
/*   Updated: 2022/09/14 18:42:28 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char * ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	if (len == 0)
		return ((char *) 0);
	while (big[i])
	{
		if (big[i] == little[0])
		{
			while (little[j])
			{
				if (big[i + j] != little[j])
				{
					j = 0;
					break;
				}
				else if (j == len - 1 || little[j + 1] == '\0')
				{
					return ((char *)&big[i]);
				}
			j++;
			}
		}	
	i++;
}
	return ((char *) 0);
}

int main ()
{
	printf("%s\n", ft_strnstr("aaabcabcd", "cd", 8));
	return (0);
}
