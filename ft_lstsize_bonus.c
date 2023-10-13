/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krocha-h <krocha-h@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:30:12 by krocha-h          #+#    #+#             */
/*   Updated: 2023/10/13 13:02:14 by krocha-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Counts the number of nodes in a list */

int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst)
    {
        lst = lst->next;
        count++;
    }
    return (count);
}
