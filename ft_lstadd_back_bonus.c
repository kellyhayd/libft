42 HEADER

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    (ft_lstlast(*lst))->next = new;
}