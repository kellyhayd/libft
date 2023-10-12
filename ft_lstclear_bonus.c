42 HEADER

#include "libft.h"

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