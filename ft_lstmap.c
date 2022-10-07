/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 00:11:25 by ckunimur          #+#    #+#             */
/*   Updated: 2022/10/08 00:43:26 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*aux;
	
	while (lst->next != NULL)
	{
		aux = ft_lstnew(f(lst->content));
		if (aux->content == NULL)
			ft_lstdelone(aux, del);
		else
		ft_lstadd_back(&newlst, aux);
		lst = lst->next;
	}
	return (newlst);
}
