/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 23:15:27 by ckunimur          #+#    #+#             */
/*   Updated: 2022/09/30 23:15:28 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef	struct s_list
{
	void *	content;
	t_list	next;
}t_list

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
}
