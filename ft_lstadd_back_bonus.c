/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:13:01 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/13 13:02:50 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Adds the node ’new’ at the end of the list */

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;

    last = ft_lstlast(*lst);
    if (!last)
        *lst= new;
    else
        last->next = new;
}
