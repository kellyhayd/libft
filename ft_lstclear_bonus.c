/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:29:01 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/13 13:03:58 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Deletes and frees the given node and every successor of that node, using the
function ’del’ and free. Finally, the pointer to the list must be set to NULL */

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *tmp;

    while (*lst)
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = tmp;
    }
    *lst = NULL;
}
