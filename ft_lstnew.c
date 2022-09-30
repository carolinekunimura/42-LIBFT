/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 00:27:00 by ckunimur          #+#    #+#             */
/*   Updated: 2022/10/01 00:27:02 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef	struct s_list
{
	void	*content;
	t_list	next;
} t_list;

t_list  *ft_lstnew(void *content)
{
	t_list	*bonus;
	bonus = ft_calloc(1, sizeof(t_list));
	bonus->content = content;
	bonus->next = NULL;
	
	return (t_list);
}







