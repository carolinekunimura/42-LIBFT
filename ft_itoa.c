/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:40:54 by ckunimur          #+#    #+#             */
/*   Updated: 2022/09/29 20:40:23 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	l;

	l = 1;
	if (n < 0)
	{
		l++;
		n *= -1;
	}
	while (n > 9)
	{
		n = (n / 10);
		if (n != 0)
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	int		l;
	char	*p;

	if (n == -2147483648)
	{
		p = (char *)ft_calloc(12, sizeof(char));
		p = "-2147483648";
		return (p);
	}
	l = ft_intlen(n);
	p = (char *)ft_calloc(l + 1, sizeof(char));
	if (n < 0)
	{
		p[0] = '-';
		n *= -1;
	}
	while (l - 1 >= 0 && p[l - 1] == '\0')
	{
		p[l - 1] = (n % 10) + '0';
		n = n / 10;
		l--;
	}
	return (p);
}
