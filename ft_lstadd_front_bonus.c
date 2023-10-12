42 HEADER

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}

// lst := 20

// kelly1 := 14
// {
//     content -> 42
//     next -> ...
// }

// new := 20
// {
//     content -> 22
//     next := 14
// }