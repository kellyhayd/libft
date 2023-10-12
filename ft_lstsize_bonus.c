#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
    while (lst->next)
    {
        lst = lst->next;
        count++;
    }
}