/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbidal <nbidal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:04:30 by nbidal            #+#    #+#             */
/*   Updated: 2024/04/11 10:25:08 by nbidal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	init(t_list **ch, t_list **cc, t_list **lst, void *(*f)(void *))
{
	(*cc)->content = f((*lst)->content);
	(*cc)->next = NULL;
	*ch = *cc;
	*lst = (*lst)->next;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*clone_head;
	t_list	*clone_current;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	clone_current = malloc(sizeof(t_list));
	if (clone_current == NULL)
		return (NULL);
	init(&clone_head, &clone_current, &lst, f);
	while (lst != NULL)
	{
		clone_current->next = malloc(sizeof(t_list));
		if (clone_current->next == NULL)
		{
			ft_lstclear(&clone_head, del);
			return (NULL);
		}
		clone_current = clone_current->next;
		clone_current->content = f(lst->content);
		clone_current->next = NULL;
		lst = lst->next;
	}
	return (clone_head);
}
