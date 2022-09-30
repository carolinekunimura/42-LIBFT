/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 00:27:07 by ckunimur          #+#    #+#             */
/*   Updated: 2022/10/01 00:27:08 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	void *	content;
	t_list	next;
}t_list;


int	ft_lstsize(t_list *lst)
{
	int count;

	count = 0;
	while (lst->next != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count)
}
