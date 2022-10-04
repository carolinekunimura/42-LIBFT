/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:43:40 by ckunimur          #+#    #+#             */
/*   Updated: 2022/10/04 19:10:10 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_str(char const *s, char c)
{

	int	i;
	int count;

	i = 0;
	count = 1;
	if (!s)
		return ('\0');
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			count++;
		i++;
	}
	return (count);
}

static int	ft_strsize(char const *s, char c)
{
	int	i;
	int j;
	char *p_str;

	p_str = NULL;
	i = 0;
	j = 0;
	if (!s)
		return ('\0');
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			p_str[j] = i;
		j++;
		i++;
	}
	return (*p_str);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	j;
	char	*n;
	char	str[0][0];
	char 	**p = NULL;

	n = 0;
	j = 0;
	count = (ft_count_str(s, c));
	*p = ft_calloc(count, sizeof(char *));
	while (j < count)
	{
		n[j] = ft_strsize(s, c);
		str[j][0] = *ft_substr(s, j, n[j]);
		j++;
	}
	return (p);
}

int main ()
{
	const char *p;
	
	p = "palavra1 palavra2 palavra3";
	printf("%c", **ft_split(p, ' '));
	return (0);
}
